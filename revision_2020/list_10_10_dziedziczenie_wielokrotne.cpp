#include <iostream>
#include <string.h>

using namespace std;

class Mammal
{
public:
    void FeedBabyMilk()
    {
        cout << "Ssak: Młode musi dostać mleko!"
             << "\n";
    }
};

class Reptile
{
public:
    void SpitVenom()
    {
        cout << "Gad: przegonić wroga, pluć  Jadem!"
             << "\n";
    }
};

class Bird
{
public:
    void LayEggs()
    {
        cout << "Ptak: Składać jaja!"
             << "\n";
    }
};

// Dziedziczenie wielokrotne here
class Platypus : public Mammal, public Reptile, public Bird
{
public:
    void Swim()
    {
        cout << "Dziobak: uwaga, potrafię pływać! "
             << "\n";
    }
};

int main(int argc, const char **argv)
{
    // dziedziczenie wielokrotne

    Platypus freak;
    freak.LayEggs();
    freak.FeedBabyMilk();
    freak.SpitVenom();
    freak.Swim();

    /* OUTPUT:
    Ptak: Składać jaja!
    Ssak: Młode musi dostać mleko!
    Gad: przegonić wroga, pluć  Jadem!
    Dziobak: uwaga, potrafię pływać! 
     */
    
    return 0;
}