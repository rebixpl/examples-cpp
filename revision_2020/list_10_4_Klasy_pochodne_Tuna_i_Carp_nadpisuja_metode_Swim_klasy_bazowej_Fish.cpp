#include <iostream>
#include <string.h>

using namespace std;

class Fish
{
private:
    bool FreshWaterFish;

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

    void Swim()
    {
        cout << "Tunczyk plywa naprawde szybko"
             << "\n";
    }
};

class Carp : public Fish
{
public:
    Carp() : Fish(true) {}

    void Swim()
    {
        cout << "Karp plywa naprawde wolno!"
             << "\n";
    }
};

int main(int argc, const char **argv)
{
    // Klasy pochodne Tuna i Carp nadpisują metodę Swim() klasy bazowej Fish

    Carp myLunch;
    Tuna myDinner;

    cout << "Przewidywane pożywienie: "
         << "\n";

    cout << "Obiad: ";
    myLunch.Swim(); // OUTPUT: Karp plywa naprawde wolno!

    cout << "Kolacja: ";
    myDinner.Swim(); // OUTPUT: Tunczyk plywa naprawde szybko

    myDinner.Fish::Swim(); // Polecenie spowoduje wywołanie Fish::Swim(), mimo że obiektem jest Tuna.

    return 0;
}