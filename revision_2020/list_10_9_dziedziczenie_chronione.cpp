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

// Uzycie protected
class Car : protected Motor
{
public:
    void Move()
    {
        SwitchIgnition();
        PompFuel();
        FireCylinders();
    }
};

class SuperCar: protected Car
{
    public:
    void Move(){
        SwitchIgnition(); // Ma dostęp do elementów składowych klasy bazowej, w przypadku dziedziczenia prywatnego (private) nie miał by dostępu do klasy bazowej
        PompFuel();
        FireCylinders();
        FireCylinders();
        FireCylinders();
    }
};

int main(int argc, const char **argv)
{
    // Klasa SuperCar dziedziczy po klasie Car, która z kolei stosuje dziedziczenie chronione po klasie Motor

    /*
    Hierarchia dziedziczenia prywatnego pozwala podklasom podklas (tutaj
    Derived2) na uzyskanie dostępu do publicznych elementów składowych klasy
    bazowej (tutaj Base), 
    */

    Car myDreamCar;
    myDreamCar.Move();
    /* OUTPUT:
    Zapłon włączony
    Paliwo w cylindrach
    Vroom */

    cout << "\n";

    SuperCar mySuperCar;
    mySuperCar.Move();
    /* OUTPUT:
    Zapłon włączony
    Paliwo w cylindrach
    Vroom
    Vroom
    Vroom
    */

    // mySuperCar.FireCylinders(); // ERROR

    return 0;
}