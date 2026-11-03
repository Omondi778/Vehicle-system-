C++
#include <iostream>
using namespace std;

// Base class
class Vehicle
{
protected:
    string brand;
    int year;

public:
    void displayVehicle()
    {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle
{
    int doors;
    double engineCapacity;

public:
    void inputDetails()
    {
        cout << "Enter vehicle brand: ";
        cin >> brand;

        cout << "Enter year of manufacture: ";
        cin >> year;

        cout << "Enter number of doors: ";
        cin >> doors;

        cout << "Enter engine capacity: ";
        cin >> engineCapacity;
    }

    void displayCar()
    {
        cout << "\n------ CAR DETAILS ------" << endl;

        displayVehicle();

        cout << "Number of Doors: " << doors << endl;
        cout << "Engine Capacity: " << engineCapacity << " CC" << endl;
    }
};

int main()
{
    Car c;

    c.inputDetails();

    c.displayCar();

    return 0;
}
