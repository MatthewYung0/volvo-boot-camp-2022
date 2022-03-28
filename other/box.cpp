#include <iostream>

using namespace std;

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box

    void printVolume() {
        cout << "The volume is " << length * breadth * height << endl;
    }
    
};

int main() {
   Box Box1;
   Box Box2;
 
   // box 1 specification
   Box1.height = 5.0; 
   Box1.length = 6.0; 
   Box1.breadth = 7.0;

   // box 2 specification
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
   
   Box1.printVolume();
   Box2.printVolume();

   return 0;
}