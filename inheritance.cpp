#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
using namespace std;

void setVehicleInfo(string &manufacturer, int &yearMade){
    cout << "Enter the manufacturer: ";
    cin >> ws;
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearMade;
}
int main(){
    cout << "Vehicle Program" << endl;
    string manufacturer;
    int yearMade;
    int numDoors;
    int capacity;

    cout << endl << "Vehicle:" << endl;
    setVehicleInfo(manufacturer, yearMade);
    Vehicle(manufacturer, yearMade).displayInfo();

    cout << endl << "Car:" << endl;
    setVehicleInfo(manufacturer, yearMade);
    cout << "Enter the number of doors: ";
    cin >> numDoors;
    Car(manufacturer, yearMade, numDoors).displayInfo();

    cout << endl << "Truck:" << endl;
    setVehicleInfo(manufacturer, yearMade);
    cout << "Enter the towing capacity: ";
    cin >> capacity;
    Truck(manufacturer, yearMade, capacity).displayInfo();

    return 0;
}