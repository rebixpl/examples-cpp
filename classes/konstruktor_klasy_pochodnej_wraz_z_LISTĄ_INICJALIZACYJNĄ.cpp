#include <iostream>

using namespace std;

class Fish
{
protected:
    bool FreshWaterFish;

public:
    //Przeciążony konstruktor klasy Fish
    Fish(bool isFreshWater) : FreshWaterFish(isFreshWater) {}

    void Swim()
    {
        if(FreshWaterFish)
            cout << "ryby plywajace w jeziorach" << "\n";
        else
            cout << "ryby plywajace w morzach" << "\n";
    }
};

class Tuna: public Fish
{
public:
    Tuna(): Fish(false) {} // Utworzenie egzemplarza klasy Fish wraz z argumentem false
};

class Carp: public Fish
{
public:
    Carp(): Fish(true) {}
};

int main()
{
    Carp myCarp;
    Tuna myTuna;

    //myTuna.FreshWaterFish = true; //nie można zmienić chronionej składowej

    cout << "Przewidywane pozywienie: " << "\n";

    cout << "Obiad: ";
    myCarp.Swim();

    cout << "Kolacja: ";
    myTuna.Swim();

    return 0;
}
