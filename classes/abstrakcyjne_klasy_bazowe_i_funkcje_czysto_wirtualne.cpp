/* Klasa bazowa, której egzemplarza nie można utworzyć nazywana jest
abstrakcyjną klasą bazową.Te klasy służą do tego aby inne klasy dziedziczyły po nich */

#include <iostream>

using namespace std;

class Fish
{
public:
    //Definicja funkcji czysto wirtualnej o nazwie Swim()
    virtual void Swim() = 0;
};

class Tuna: public Fish
{
public:
    void Swim()
    {
        cout << "Tunczyk plywa szybko w morzu!" << "\n";
    }
};

class Carp: public Fish
{
public:
    void Swim()
    {
        cout << "Karp plywa powoli w jeziorze!" << "\n";
    }
};

void MakeFishSwim(Fish& inputFish)
{
    inputFish.Swim();
}

int main()
{
    //Fish myFish; //Bład brak możliwości utworzenia abstrakcyjnej klasy bazowej.
    Carp myCarp;
    Tuna myTuna;

    MakeFishSwim(myCarp);
    MakeFishSwim(myTuna);

    return 0;
}
