#include "Car.h"
#include <iostream>
using namespace std;
void Car::displayInfo(){
    Vehicle::displayInfo();
    cout << "Doors: " << this->getNumDoors() << endl;
}