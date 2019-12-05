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
    Tuna(): Fish(false) {}

    void Swim()
    {
        cout << "Tunczyk plywa naprawde szybko" << "\n";
    }
};

class Carp: public Fish
{
public:
    Carp(): Fish(true) {}

    void Swim()
    {
        cout << "Karp plywa naprawde wolno" << "\n";
    }
};

int main()
{
    Carp myCarp;
    Tuna myTuna;

    cout << "Przewidywane pozywienie: " << "\n";

    cout << "Obiad: ";
    myCarp.Swim(); // Wywola sie metoda Carp::Swim(), ktora nadpisuje metode
                   // Fish::Swim()

    cout << "Kolacja: ";
    myTuna.Swim();  // Wywola sie metoda Tuna::Swim(), ktora nadpisuje metode
                    // Fish::Swim()

    cout << endl;

    myCarp.Fish::Swim(); //Polecenie spowoduje wywołanie Fish::Swim()
                         //mimo, że obiektem jest Tuna
    return 0;
}
