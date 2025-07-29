#include "Vehicle.h"
#include <iostream>
using namespace std;

void Vehicle::displayInfo(){
    cout << "Vehicle Information:" << endl;
    cout << "Manufacturer: " << this->manufacturer << endl;
    cout << "Year Built: " << this->yearMade << endl;
}
Vehicle::Vehicle(string manufacturer, int yearMade){
    this->setManufacturer(manufacturer);
    this->setYearMade(yearMade);
}