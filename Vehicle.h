#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
protected:
  string manufacturer;
  int yearBuilt;

public: 
Vehicle(const string manufacturer, int yearBuilt);
string getManufacturer() const;
void setManufacturer(const string manufacturer);
int getYearBuilt() const;
void setYearBuilt(int yearBuilt);
void displayInfo() const;
}
#endif // VEHICLE_H

// this file sets up variables, functions, and the class for Vehicles which will be used in Vehicle.cpp 
