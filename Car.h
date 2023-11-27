#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(const string& man, int year, int doors);
    int getNumDoors() const;
    void setNumDoors(int doors);
    void displayInfo() const;
};

#endif