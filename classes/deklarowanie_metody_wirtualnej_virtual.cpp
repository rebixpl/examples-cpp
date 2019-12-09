#include <iostream>

using namespace std;

class Fish
{
public:
    virtual void Swim()                 //Użycie słowa kluczowego"virtual" oznacza, że kompilator gwarantuje
    {                                    //wywołanie nadpisanego wariantu żądanej metody klasy bazowej. Dlatego też
        cout << "Ryba plywa!" << "\n";  //po zadeklarowaniu Swim() jako funkcji wirtualnej wywołanie myFish.Swim(),
    }                                    //gdzie myFish jest typu Fish&, oznacza wywołanie metody Tuna::Swim().
};

class Tuna: public Fish
{
public:
    //Nadpisanie metody Fish::Swim()
    void Swim()
    {
        cout << "Tunczyk plywa!" << "\n";
    }
};

class Carp: public Fish
{
public:
    //Nadpisanie metody Fish::Swim()
    void Swim()
    {
        cout << "Karp plywa!" << "\n";
    }
};

void MakeFishSwim(Fish& inputFish)
{
    //Wywołanie metody wirtualnej Swim()
    inputFish.Swim();
}

int main()
{
    Tuna myTuna;
    Carp myCarp;

    //Wysłanie obiektu Tuna jako Fish
    MakeFishSwim(myTuna);

    //Wysłanie obiektu Carp jako Fish
    MakeFishSwim(myCarp);

    return 0;
}
