#include <iostream>

using namespace std;

class Fish // Deklaracja superklasy (klasa bazowa)
{
public:
    bool FreshWaterFish;

    void Swim()
    {
        if(FreshWaterFish)
            cout << "ryby plywajace w jeziorach" << "\n";
        else
            cout << "ryby plywajace w morzach" << "\n";
    }
};

class Tuna: public Fish // Deklaracje klas potomnych
{                        // public -> dla relacji "klasa potomna jest klasą bazową"
public:
    Tuna()
    {
        FreshWaterFish = false;
    }
};

class Carp: public Fish // Deklaracje klas potomnych
{
public:
    Carp()
    {
        FreshWaterFish = true;
    }
};

int main()
{
    Carp myCarp;
    Tuna myTuna;

    cout << "Przewidywane pozywienie: " << "\n";

    cout << "Obiad: ";
    myCarp.Swim();

    cout << "Kolacja: ";
    myTuna.Swim();

    return 0;
}
