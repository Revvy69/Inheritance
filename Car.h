#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
private:
  int doorNums;
public:
  Car(const string manufacturer, int yearBuilt, int doorNums);
  int getDoorNums() const;
  void setDoorNums(int doorNums);
  void displayInfo() const override; 
}
#endif // CAR_H
// this file is the same as vehicle.h but it's for the variable car 
// will most likely be using this for the cpp as well
