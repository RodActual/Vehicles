#include "Truck.h"
#include <iostream>

Truck::Truck(const string& man, int year, int capacity) : Vehicle(man, year), towingCapacity(capacity) {}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setTowingCapacity(int capacity) {
    towingCapacity = capacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << "\n";
}