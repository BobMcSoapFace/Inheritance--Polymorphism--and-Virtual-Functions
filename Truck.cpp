#include "Truck.h"
#include <iostream>
using namespace std;
void Truck::displayInfo(){
    Vehicle::displayInfo();
    cout << "Towing capacity: " << this->getCapacity() << endl;
}