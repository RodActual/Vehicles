#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>

int main() {
    // Vehicle
    string manufacturer;
    int year;

    cout << "Enter vehicle manufacturer: ";
    cin >> manufacturer;
    cout << "Enter year built: ";
    cin >> year;

    Vehicle vehicle(manufacturer, year);
    vehicle.displayInfo();

    // Car
    int doors;

    cout << "\nEnter car manufacturer: ";
    cin >> manufacturer;
    cout << "Enter car year built: ";
    cin >> year;
    cout << "Enter number of doors: ";
    cin >> doors;

    Car car(manufacturer, year, doors);
    car.displayInfo();

    // Truck
    int capacity;

    cout << "\nEnter truck manufacturer: ";
    cin >> manufacturer;
    cout << "Enter truck year built: ";
    cin >> year;
    cout << "Enter towing capacity: ";
    cin >> capacity;

    Truck truck(manufacturer, year, capacity);
    truck.displayInfo();

    return 0;
}