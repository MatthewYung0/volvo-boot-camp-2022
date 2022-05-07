#include <iostream>
#include <iomanip>

class Emulator
{
private:
    // Car
    int currentSpeed;

    // Engine variables
    int maxRPM;
    int minRPM;
    int maxSpeed;
    int currentRPM;
    int currentGear;
    float currentGearRatio;
    bool engineState; // engineState as to whether it is on (1) or off (0)
   
    // Gearbox variables
    const int gears[4] = {0,1,2,3}; // 0 (reverse), 1 (neutral), 2 (park), 3 (drive)
    const float gearRatios[5] = {-4.28, 3.81, 2.71, 1.37, 0.81}; // -4.28 (reverse), 3.81 (gear 1), 2.71 (gear 2), 1.37 (gear 3), 0.81 (gear 4)

public:
    Emulator() :currentSpeed(0), maxRPM(7500), minRPM(650), maxSpeed(180), 
                currentRPM(0), currentGear(2), currentGearRatio(3.81), engineState(0) {
                };
    ~Emulator(){};

    // Engine
    int getCurrentRPM() { return currentRPM; };
    int getCurrentSpeed() { return currentSpeed; };
    bool getEngineState() { return engineState; };
    void setEngineState(bool engineState) {
        // Starting engine
        if (engineState == 1 && this->engineState == 0) {
            this->engineState = 1;
            currentRPM = 650;
        }
        // Shutting down engine.
        else if (engineState == 0 && this->currentGear == gears[2] && this->currentRPM <= 650) {
            this->engineState = 0;
            currentRPM = 0;
        }
    };

    void pedalDown() {
        // Check if engine state is 1
        if (getEngineState()) {
            applyGearboxEngineAcceleration(5);
        }
    }
    void pedalUp() {
        if (getEngineState()) {
            applyGearboxEngineDeccleration(5);
        }
    }

    void increaseRPM(int rpm) {
        // Checking that the added RPM does not exceed maxRPM
        if (this->currentRPM + rpm > maxRPM) {
            this->currentRPM = maxRPM;
        } else {
        // currentRPM = maxRPM if rpm exceeds maxRPM
            this->currentRPM += rpm;
        }

    }
    void decreaseRPM(int rpm) {
        // Checking that the subtracted RPM does not go lower than minRPM, else currentRPM = minRPM
        if (this->currentRPM - rpm < minRPM) {
            this->currentRPM = minRPM;
        } else {
            // rpm subtracted from currentRPM if not lower than minRPM
            this->currentRPM -= rpm;
        }
    }
    
    void increaseSpeed(int speed) {
        if (this->currentSpeed + speed > maxSpeed) {
            this->currentSpeed = maxSpeed;
        } else {
            this->currentSpeed += speed;
        }
    }
    void decreaseSpeed(int speed) {
        // Checking that the subtracted RPM does not go lower than minRPM, else currentRPM = minRPM
        if (this->currentSpeed - speed < 0) {
            this->currentSpeed = 0;
        } else {
            // rpm subtracted from currentRPM if not lower than minRPM
            this->currentSpeed -= speed;
        }
    }
    
    void applyGearboxEngineAcceleration(int speed) {
        // Gear 0 (reverse mode)
        if (currentGear == gears[0]) {
            increaseRPM(abs(100 * gearRatios[0]));
        }
        // Gear 1 (neutral mode) or Gear 2 (parking mode)
        else if (currentGear == gears[1] || currentGear == gears[2]) {
            increaseRPM(100 * gearRatios[1]);
        }
        // Gear 3 (drive)
        else if (currentGear == gears[3]) {
            // Increase speed
            increaseSpeed(speed);
            // If speed exceeds 2000 RPM in '1st gear', change to '2nd gear' and reduce RPM to 1800
            if (currentGearRatio == gearRatios[1] && getCurrentRPM() >= 2000 && speed <= 10) {
                currentGearRatio = gearRatios[2];
                setRPM(1700);
            }
            // If speed exceeds 2000 RPM in '2nd gear', change to '3rd gear' and reduce RPM to 1800
            else if (currentGearRatio == gearRatios[2] && getCurrentRPM() >= 2000 && speed > 10 && speed <= 50) {
                currentGearRatio = gearRatios[3];
                setRPM(1700);
            }
            // If speed exceeds 2000 RPM in '4th gear', change to '5th gear' and reduce RPM to 1800
            else if (currentGearRatio == gearRatios[3] && getCurrentRPM() >= 2000 && speed > 50) {
                currentGearRatio = gearRatios[4];
                setRPM(1700);
            }
            // If RPM does not exceed 2000, increase RPM by 200
            else {
                increaseRPM(200);
            }
        }
    }

    void applyGearboxEngineDeccleration(int speed) {
        // Gear 3 (drive)
        if (currentGear == gears[3]) {
            // Decrease speed
            decreaseSpeed(speed);
            // If speed exceeds 50km/ph in '4th gear', change to '3rd gear' and increase RPM to 2500
            if (currentGearRatio == gearRatios[4] && getCurrentRPM() < 2000 && currentSpeed >= 50) {
                currentGearRatio = gearRatios[3];
                setRPM(2500);
            }
            // If speed is in between 49 and 10 km/ph in '3rd gear', change to '2nd gear' and increase RPM to 2500
            else if (currentGearRatio == gearRatios[3] && getCurrentRPM() < 2000 && currentSpeed < 50 && currentSpeed >= 10) {
                currentGearRatio = gearRatios[2];
                setRPM(2500);
            }
            // If speed is less than 10 km/ph in '2nd gear', change to '1st gear' and increase RPM to 2200
            else if (currentGearRatio == gearRatios[2] && getCurrentRPM() < 2000 && currentSpeed < 10) {
                currentGearRatio = gearRatios[1];
                setRPM(2200);
            }
            // If RPM does not exceed 2000, increase RPM by 200
            else {
                decreaseRPM(200);
            }
        }
    }
    
    // Gearbox
    int getCurrentGear() { return currentGear; };
    float getCurrentGearRatio() { return currentGearRatio; };
    void setGear(int gear) {
        // Check if engine state is 1
        if (engineState) {
            if (
                // Reverse : Check if currentGear is 1 (neutral)
                (gear == 0 && getCurrentGear() == 1) ||
                // Neutral : *No conditions
                (gear == 1) ||
                // Park : Check if currentGear is 1 (neutral) and carSpeed == 0
                (gear == 2 && getCurrentGear() == 1 && currentSpeed == 0) ||
                // Drive : Check if current gear is 1 (neutral)
                (gear == 3 && getCurrentGear() == 1))
            {
                this->currentGear = gear;
            }
        }
    }
    void setRPM(int rpm) {
        this->currentRPM = rpm;
    }
    
    void printOutDetails()
    {
        std::cout 
        << "Engine State: " << getEngineState() << " || " << std::setw(10) 
        << " Current RPM : " << getCurrentRPM() << " || " << std::setw(10) 
        << " Current Gear : " << getCurrentGear() << " || " << std::setw(10)
        << " Current Speed : " << getCurrentSpeed() << " || " << std::setw(10)
        << " Current Gear Ratio : " << getCurrentGearRatio() << " || " << std::setw(10);
        std::cout << std::endl;
    }
};

int main(){

    Emulator engine;
    int engineState = 0;
    char input = ' ';

    while(true) {

        std::cout << std::endl;
        engine.printOutDetails();
        std::cout << std::endl;
        std::cout << "Enter input: ";
        scanf(" %c", &input);

        switch(input) {
            case 's':
            {
                if (engine.getEngineState() == 0) {
                    engine.setEngineState(1);
                } else {
                    engine.setEngineState(0);
                }
            }
            break;
            case 'd': {
                engine.setGear(3);
                break;
            }
            case 'r': {
                engine.setGear(0);
                break;
            }
            case 'n': {
                engine.setGear(1);
                break;
            }
            case 'p': {
                engine.setGear(2);
                break;
            }
            case 'q': {
                engine.pedalDown();
                break;
            }
            case 'a': {
                engine.pedalUp();
                break;
            }
        }



        // std::cout << "Enter Engine State: ";
        // scanf("%d", &engineState);

        // std::cout << "Enter Gear: ";
        // scanf("%d", &gear);

        // std::cout << "Enter pedal_movement: (1 - step down, 2 - release): ";
        // scanf("%d", &pedal_movement);

        // engine.setEngineState(engineState);

        // engine.setGear(gear);

        // switch(pedal_movement) {
        //     case 1:
        //     engine.pedalDown();
        //     break;
        //     case 2:
        //     engine.pedalUp();
        //     break;
        // }
    }

}