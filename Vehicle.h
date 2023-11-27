#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
protected:
    string manufacturer;
    int yearBuilt;

public:
    Vehicle(const string& man, int year);
    string getManufacturer() const;
    int getYearBuilt() const;
    void setManufacturer(const string& man);
    void setYearBuilt(int year);
    void displayInfo() const;
};

#endif
