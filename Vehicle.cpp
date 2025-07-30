// Riley Wen
// CIS 1202 ET1
// July 29th, 2025
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