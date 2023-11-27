#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(const string& man, int year) : manufacturer(man), yearBuilt(year) {}

string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setManufacturer(const string& man) {
    manufacturer = man;
}

void Vehicle::setYearBuilt(int year) {
    yearBuilt = year;
}

void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << "\nYear Built: " << yearBuilt << "\n";
}