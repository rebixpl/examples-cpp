#include <iostream>

using namespace std;

class Human
{
private:
    string Name;
    int Age;

public:
    void setName(string humansName)
    {
        Name = humansName;
    }

    void setAge(int humansAge)
    {
        Age = humansAge;
    }

    void introduceSelf()
    {
        cout << "Mam na imie " + Name << " i mam ";
        cout << Age << " lat" << endl;
    }
};

int main(int argc, const char **argv)
{
    // klasa przyklad

    // Utworzenie obiektu klasy Human wraz z atrybutem Name o wartości "Adam".
    Human FirstMan;
    FirstMan.setName("Adam");
    FirstMan.setAge(30);

    // Utworzenie obiektu klasy Human wraz z atrybutem Name o wartości "Ewa".
    Human FirstWoman;
    FirstWoman.setAge(28);
    FirstWoman.setName("EWA");

    FirstMan.introduceSelf();
    FirstWoman.introduceSelf();

    // OUTPUT:
    // Mam na imie Adam i mam 30 lat
    // Mam na imie EWA i mam 28 lat
}
