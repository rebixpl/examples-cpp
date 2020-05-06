#include <iostream>

using namespace std;

class Human
{
private:
    string Name;
    int Age;

public:

    /* 
    Możesz zdecydować o niezaimplementowaniu konstruktora domyślnego, aby
    w ten sposób wymusić utworzenie egzemplarza obiektu z określonymi parametrami
    minimalnymi.
    */

    // Konstruktor domyślny
    Human(){
        Age = 0;
        cout << "Konstruktor domyślny tworzy egzemplarz klasy Human" << "\n";
    }

    // Przeciążony konstruktor pobierający ciąg tekstowy Name.
    Human(string HumansName){
        Name = HumansName;
        Age = 0;
        cout << "Konstruktor przeciążony tworzy obiekt " << Name << endl;
    }

    // Przeciążony konstruktor pobierający ciąg tekstowy Name i liczbę Age.
    Human(string HumansName, int HumansAge){
        Name = HumansName;
        Age = HumansAge;
        cout << "Konstruktor przeciążony tworzy obiekt ";
        cout << Name << " w wieku " << Age << " lat" << endl;
    }

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
    // klasa z wieloma konstruktorami domyślnymi oraz bez konstruktora domyślnego

    Human FirstMan; // Użycie konstruktora domyślnego
    FirstMan.setName("Adam");
    FirstMan.setAge(30);

    Human FirstWoman("Ewa"); // Użycie konstruktora przeciążonego.
    FirstWoman.setAge(28);

    Human FirstChild("RÓŻA", 5);

    FirstMan.introduceSelf();
    FirstWoman.introduceSelf();
    FirstChild.introduceSelf();

    /* OUTPUT:
    Konstruktor domyślny tworzy egzemplarz klasy Human
    Konstruktor przeciążony tworzy obiekt Ewa
    Konstruktor przeciążony tworzy obiekt RÓŻA w wieku 5 lat
    Mam na imie Adam i mam 30 lat
    Mam na imie Ewa i mam 28 lat
    Mam na imie RÓŻA i mam 5 lat
    */
    
}
