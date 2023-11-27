#include "Car.h"
#include <iostream>

Car::Car(const string& man, int year, int doors) : Vehicle(man, year), numDoors(doors) {}

int Car::getNumDoors() const {
    return numDoors;
}

void Car::setNumDoors(int doors) {
    numDoors = doors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numDoors << "\n";
}