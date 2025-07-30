// Riley Wen
// CIS 1202 ET1
// July 29th, 2025
#ifndef VEHICLE_FILE
#define VEHICLE_FILE

#include <string>
using namespace std;

class Vehicle {
    private:
        string manufacturer;
        int yearMade;
    public:
        Vehicle(string, int);
        string getManufacturer(){
            return manufacturer;
        }     
        int getYearMade(){
            return yearMade;
        }
        void setManufacturer(string newManufacturer){
            manufacturer = newManufacturer;
        }
        void setYearMade(int newYear){
            yearMade = newYear;
        }
        virtual void displayInfo();
};

#endif