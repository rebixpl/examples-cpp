#include <iostream>
#include <string.h>

using namespace std;

class Fish
{
public:
    Fish()
    {
        cout << "Utworzono obiekt Fish"
             << "\n";
    }

    // Destruktor klasy bazowej zawsze deklaruj jako wirtualny:
    //
    // class Base
    // {
    //     public:
    //
    // };
    //
    // W ten sposób gwarantujesz, że wskaźnik Base* nie będzie mógł wywołać
    // operatora delete w sposób uniemożliwiający wywołanie destruktora klasy
    // potomnej.

    virtual ~Fish() // Destruktor wirtualny
    {
        cout << "Zniszczono obiekt Fish"
             << "\n";
    }
};

class Tuna : public Fish
{
public:
    Tuna()
    {
        cout << "Utworzono obiekt Tuna"
             << "\n";
    }
    ~Tuna()
    {
        cout << "Zniszczono obiekt Tuna"
             << "\n";
    }
};

void DeleteFishMemory(Fish* pFish)
{
    delete pFish;
}

int main(int argc, const char **argv)
{
    // metody wirtualne

    cout << "Alokacja pamięci dla obiektu Tuna:" << endl;
    Tuna* pTuna = new Tuna;

    cout << "Usunięcie obiektu Tuna: " << endl;
    DeleteFishMemory(pTuna);

    cout << "Inicjalizacja obiektu Tuna na stosie:" << endl;
    Tuna myDinner;

    cout << "Automatyczne usunięcie obiektu znajdującego się poza zakresem: " << endl;

    // OUTPUT: 
    // Alokacja pamięci dla obiektu Tuna:
    // Utworzono obiekt Fish
    // Utworzono obiekt Tuna
    // Usunięcie obiektu Tuna: 
    // Zniszczono obiekt Tuna
    // Zniszczono obiekt Fish
    // Inicjalizacja obiektu Tuna na stosie:
    // Utworzono obiekt Fish
    // Utworzono obiekt Tuna
    // Automatyczne usunięcie obiektu znajdującego się poza zakresem: 
    // Zniszczono obiekt Tuna
    // Zniszczono obiekt Fish

    return 0;
}