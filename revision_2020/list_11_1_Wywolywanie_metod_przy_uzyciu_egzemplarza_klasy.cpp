#include <iostream>
#include <string.h>

using namespace std;

class Fish
{
    public:
    void Swim()
    {
        cout << "Ryba pływa!" << "\n";
    }
};

class Tuna: public Fish{
    public:
    // Nadpisanie metody Fish::Swim()
    void Swim()
    {
            cout << "Tunczyk plywa!" << "\n";
    }
};

void MakeFishSwim(Fish& InputFish)
{
    // Wywołanie Fish::Swim()
    InputFish.Swim();
}

int main(int argc, const char **argv)
{
    // Wywoływanie metod przy użyciu egzemplarza klasy bazowej Fish, który należy do obiektu Tuna

    Tuna myDinner;

    // Wywołanie Tuna::Swim().
    myDinner.Swim();
    // OUTPUT: Tunczyk plywa!

    // Wysłanie obiektu Tuna jako Fish.
    MakeFishSwim(myDinner);
    // OUTPUT: Ryba pływa!

    return 0;
}