#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck(const string& man, int year, int capacity);
    int getTowingCapacity() const;
    void setTowingCapacity(int capacity);
    void displayInfo() const;
};

#endif