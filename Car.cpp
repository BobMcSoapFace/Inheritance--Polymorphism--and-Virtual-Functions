// Riley Wen
// CIS 1202 ET1
// July 29th, 2025
#include "Car.h"
#include <iostream>
using namespace std;
void Car::displayInfo(){
    Vehicle::displayInfo();
    cout << "Doors: " << this->getNumDoors() << endl;
}