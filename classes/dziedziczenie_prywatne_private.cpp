#include <iostream>

using namespace std;

class Motor
{
public:
    void SwitchIgnition()
    {
        cout << "Zaplon wlaczony" << "\n";
    }

    void PompFuel()
    {
        cout << "Paliwo w cylindrach" << "\n";
    }

    void FireCylinders()
    {
        cout << "Vroooooom" << "\n";
    }
};

class Car: private Motor //Dziedziczenie prywatne klasy bazowej oznacza, że wszystkie
{                         //publiczne metody i atrybuty klasy bazowej będą prywatne
public:                  //(niedostępne) dla każdego egzemplarza klasy potomnej
    void Move()
    {
        SwitchIgnition();
        PompFuel();
        FireCylinders();
    }
};

int main()
{
    Car MyDreamCar;
    MyDreamCar.Move();

    //MyDreamCar.PompFuel(); // Nie można wywołać tego polecenia, ponieważ klasa Car
                           // dziedziczy prywatnie klasę bazową Motor ( w przypadku
                           // public można było by wywołać to polecenie
    return 0;
}
