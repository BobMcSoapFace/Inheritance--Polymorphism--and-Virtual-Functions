// Riley Wen
// CIS 1202 ET1
// July 29th, 2025
#include "Truck.h"
#include <iostream>
using namespace std;
void Truck::displayInfo(){
    Vehicle::displayInfo();
    cout << "Towing capacity: " << this->getCapacity() << endl;
}