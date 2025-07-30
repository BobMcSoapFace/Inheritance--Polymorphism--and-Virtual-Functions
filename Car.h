// Riley Wen
// CIS 1202 ET1
// July 29th, 2025
#ifndef CAR_FILE
#define CAR_FILE

#include "Vehicle.h"

class Car : public Vehicle {
    private:
        int numDoors;
    public:
        int getNumDoors(){
            return numDoors;
        }
        void setNumDoors(int newDoors){
            numDoors = newDoors;
        }
        virtual void displayInfo() override;
        Car(string manufacturer, int yearMade, int numDoors) : Vehicle(manufacturer, yearMade) {
            setNumDoors(numDoors);
        }
};

#endif