#include <iostream>

using namespace std;

class Fish
{
//Po zadeklarowaniu, że obiekt jest chroniony, ( protected ) staje się on dostępny
//jedynie dla klas potomnych i tzw. przyjaciół, a niedostępny dla świata
//zewnętrznego, w tym także dla metody main().
protected:
    bool FreshWaterFish;

public:
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
    Tuna()
    {
        FreshWaterFish = false; // Zadeklarowanie chronionego elementu
                                  //składowego klasy bazowej
    }
};

class Carp: public Fish
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

    //myTuna.FreshWaterFish = true; //nie można zmienić chronionej składowej

    cout << "Przewidywane pozywienie: " << "\n";

    cout << "Obiad: ";
    myCarp.Swim();

    cout << "Kolacja: ";
    myTuna.Swim();

    return 0;
}
