#include <iostream>

using namespace std;

class Human
{
private:
    string Name;
    int Age;

public:
    // To jest konstruktor wraz z listwą inicjalizacyjną
    Human(string HumansName = "Adam", int HumansAge = 25)
        : Name(HumansName), Age(HumansAge)
    {
        cout << "Konstruktor przeciążony tworzy obiekt ";
        cout << Name << " w wieku " << Age << " lat" << endl;
    }
};

int main(int argc, const char **argv)
{
    // konstruktor wraz z listami inicjalizacyjnymi
    Human FirstMan;
    Human FirstWoman("Ewa", 18);

    /* OUTPUT: 
    Konstruktor przeciążony tworzy obiekt Adam w wieku 25 lat
    Konstruktor przeciążony tworzy obiekt Ewa w wieku 18 lat
    */

    return 0;
}
