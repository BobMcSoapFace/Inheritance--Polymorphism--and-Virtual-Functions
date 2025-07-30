// Riley Wen
// CIS 1202 ET1
// July 29th, 2025
#ifndef TRUCK_FILE
#define TRUCK_FILE

#include "Vehicle.h"

class Truck : public Vehicle {
    private:
        int capacity;
    public:
        int getCapacity(){
            return capacity;
        }
        void setCapacity(int newCapacity){
            capacity = newCapacity;
        }
        virtual void displayInfo() override;
        Truck(string manufacturer, int yearMade, int capacity) : Vehicle(manufacturer, yearMade) {
            setCapacity(capacity);
        }
};

#endif