#include <iostream>
#include <string.h>

using namespace std;

class Fish
{
public:
    // Metoda wirtualna
    /* Użycie słowa kluczowego virtual oznacza, że kompilator gwarantuje
    wywołanie nadpisanego wariantu żądanej metody klasy bazowej. */
    virtual void Swim()
    {
        cout << "Ryba pływa!"
             << "\n";
    }
};

class Tuna : public Fish
{
public:
    // Nadpisanie metody Fish::Swim()
    void Swim()
    {
        cout << "Tunczyk plywa!"
             << "\n";
    }
};

class Carp : public Fish
{
public:
    // Nadpisanie metody Fish::Swim()
    void Swim()
    {
        cout << "Karp pływa"
             << "\n";
    }
};

void
MakeFishSwim(Fish &InputFish)
{
    // Wywołanie metody wirtualnej Swim()
    InputFish.Swim();
}

int main(int argc, const char **argv)
{
    // metody wirtualne

    Tuna myDinner;
    Carp myLunch;

    // Wysłanie obiektu Tuna jako Fish.
    MakeFishSwim(myDinner); // OUTPUT: Tunczyk plywa!

    // Wysłanie obiektu Carp jako Fish.
    MakeFishSwim(myLunch); // OUTPUT: Karp plywa!

    return 0;
}