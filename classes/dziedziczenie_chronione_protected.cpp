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

class Car: protected Motor  /*Hierarchia dziedziczenia chronionego (protected) 
                              pozwala podklasom podklas (tutaj SuperCar) na 
                              uzyskanie dostępu do publicznych elementów składowych 
                              klasy bazowej (tutaj Motor).
                              Takie rozwiązanie jest niemożliwe w przypadku
                              dziedziczenia prywatnego pomiędzy klasami Motor i Car */
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
    void Move()
    {
        SwitchIgnition(); //Ma dostęp do elementów składowych klasy bazowej
        PompFuel();       //Ze względu na dziedziczenie "chronione" pomiędzy klasami
        FireCylinders();  //Car i Motor
        FireCylinders();
        FireCylinders();
    }
};

int main()
{
    SuperCar MyDreamCar;
    MyDreamCar.Move();

    return 0;
}
