#include <iostream>
#include <string.h>

using namespace std;

class Motor
{
public:
    void SwitchIgnition()
    {
        cout << "Zapłon włączony"
             << "\n";
    }

    void PompFuel()
    {
        cout << "Paliwo w cylindrach"
             << "\n";
    }

    void FireCylinders()
    {
        cout << "Vroom"
             << "\n";
    }
};

class Car : private Motor
{
public:
    void Move()
    {
        SwitchIgnition();
        PompFuel();
        FireCylinders();
    }
};

int main(int argc, const char **argv)
{
    // Klasa Car powiązana z klasą Motor za pomocą dziedziczenia prywatnego

    Car myDreamCar;
    myDreamCar.Move();
    /* OUTPUT:
    Zapłon włączony
    Paliwo w cylindrach
    Vroom */

    // myDreamCar.PompFuel(); // ERROR
    return 0;
}