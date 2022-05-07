#include <iostream>
using namespace std;

class Engine {
    private:
    int fluidLevel;
    int engineID;
    int maxRPM;
    int currentRPM;
    bool engineState; // engineState as to whether it is on (1) or off (0)

    public:
    Engine() = default;
    Engine(int fluidLevel, int engineID, int maxRPM, int currentRPM, bool engineState) : 
            fluidLevel(fluidLevel),
            engineID(engineID),
            maxRPM(maxRPM),
            currentRPM(currentRPM),
            engineState(engineState){};
    ~Engine(){};

    int getFluidLevel() {return fluidLevel;};
    int getEngineID() {return engineID;};
    int getmaxRPM() {return maxRPM;};
    int getCurrentRPM() {return currentRPM;};
    bool getEngineState() {return engineState;};

    void setFluidLevel(int fluidLevel) {this->fluidLevel = fluidLevel;};
    void setEngineID(int engineID) {this->engineID = engineID;};
    void setMaxRPM(int maxRPM) {this->maxRPM = maxRPM;};
    void setCurrentRPM(int currentRPM) {this->currentRPM = currentRPM;};
    void setEngineState(bool engineState) {this->engineState = engineState;};
    
    class Gearbox {
        private:
        int currentGear;
        int maxGear;

        public:
        Gearbox() = default;
        Gearbox(int currentGear, int maxGear) : currentGear(currentGear), maxGear(maxGear) {};
        ~Gearbox(){};

        int getCurrentGear() {return currentGear;};
        int getMaxGear() {return maxGear;};
        void setCurrentGear(int currentGear) {this->currentGear = currentGear;};
        void setMaxGear(int maxGear) {this->maxGear = maxGear;};
    };
};

int main () {
    Engine alpha;
    alpha.setCurrentRPM(500);
    cout << alpha.getCurrentRPM();
}