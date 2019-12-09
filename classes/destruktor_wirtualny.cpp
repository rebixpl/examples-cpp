/*
Destruktor klasy bazowej zawsze deklaruj jako wirtualny:

    class Base
    {
    public:
        virtual ~Base() {};  // Destruktor wirtualny!
    };

W ten sposób gwarantujesz, że wskaźnik Base* nie będzie mógł wywołać
operatora delete w sposób uniemożliwiający wywołanie destruktora klasy potomnej,
co mogłoby doprowadzić do wycieku pamięci.
*/

#include <iostream>

using namespace std;

class Fish
{
public:
    Fish()
    {
        cout << "Utworzono obiekt Fish" << "\n";
    }

    virtual ~Fish() // Destruktor wirtualny!
    {
        cout << "Zniszczono obiekt Fish" << "\n";
    }
};

class Tuna: public Fish
{
public:
    Tuna()
    {
        cout << "Utworzono obiekt Tuna" << "\n";
    }

    virtual ~Tuna()  // Destruktor wirtualny!
    {
        cout << "Zniszczono obiekt Tuna" << "\n";
    }
};

class Carp: public Fish
{
public:
    Carp()
    {
        cout << "Utworzono obiekt Carp" << "\n";
    }

    virtual ~Carp()  // Destruktor wirtualny!
    {
        cout << "Zniszczono obiekt Carp" << "\n";
    }
};

void DeleteFishMemory(Fish* inputFish)
{
    delete inputFish;
}

int main()
{
    cout << "Alokacja pamieci dla obiektu Tuna: " << "\n";
    Tuna* myTuna = new Tuna;
    cout << "Usuniecie obiektu Tuna: " << "\n";
    DeleteFishMemory(myTuna);

    cout << "Inicjalizacja obiektu Tuna na stosie: " << "\n";
    Tuna myDinner;
    cout << "Automatyczne usuniecie obiektu znajdujacego sie poza zakresem: " << "\n";

    return 0;
}
