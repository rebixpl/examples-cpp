#include <iostream>
#include <string.h>

using namespace std;

class Fish
{
// Usage of protected shown below
protected:
    bool FreshWaterFish; // Atrybut dostępny jedynie dla klas pochodnych.

public:
    // Konstruktor klasy Fish.
    Fish(bool IsFreshWater) : FreshWaterFish(IsFreshWater) {}

    void Swim()
    {
        if (FreshWaterFish)
            cout << "ryby pływające w jeziorach"
                 << "\n";
        else
            cout << "ryby pływające w morzach"
                 << "\n";
    }
};

class Tuna : public Fish
{
public:
    Tuna() : Fish(false) {}
};

class Carp : public Fish
{
public:
    Carp() : Fish(true) {}
};

int main(int argc, const char **argv)
{
    // Konstruktor klasy pochodnej wraz z listą inicjalizacyjną

    Carp myLunch;
    Tuna myDinner;

    cout << "Przewidywane pożywienie: " << "\n";

    cout << "Obiad: ";
    myLunch.Swim(); // OUTPUT: ryby pływające w jeziorach

    cout << "Kolacja: ";
    myDinner.Swim(); // OUTPUT: ryby pływające w morzach

    return 0;
}