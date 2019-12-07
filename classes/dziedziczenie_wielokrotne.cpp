#include <iostream>

using namespace std;

class Mammal
{
public:
    void FeedBabyMilk()
    {
        cout << "Ssak: Mlode musi dostac mleko" << "\n";
    }
};

class Reptile
{
public:
    void SpitVenom()
    {
        cout << "Gad: przegonic wroga, pluc jadem kurwom w oczy" << "\n";
    }
};

class Bird
{
public:
    void LayEggs()
    {
        cout << "Ptak: musze skladac jaja" << "\n";
    }
};

class Platypus: public Mammal, public Reptile, public Bird //zawiera definicje
{                                                             //dziedziczenia po
public:                                                      //trzech innych klasach       
    void Swim()
    {
        cout << "Dziobak: uwaga kurwy potrafie plywac" << "\n";
    }
};

int main()
{
    Platypus prawdziwySkurwiel;
    prawdziwySkurwiel.LayEggs();
    prawdziwySkurwiel.FeedBabyMilk();
    prawdziwySkurwiel.SpitVenom();
    prawdziwySkurwiel.Swim();

    return 0;
}
