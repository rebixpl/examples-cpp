#include <iostream>
#include <string.h>

using namespace std;

class Fish
{
// Usage of protected shown below
protected:
    bool FreshWaterFish; // Atrybut dostępny jedynie dla klas pochodnych.

public:
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
    Tuna()
    {
        FreshWaterFish = false;// Zadeklarowanie chronionego elementu składowego klasy bazowej.
    }
};

class Carp : public Fish
{
public:
    Carp()
    {
        FreshWaterFish = true;
    }
};

int main(int argc, const char **argv)
{
    // specyfikator dostępu protected

    /* Słowo kluczowe protected to specyfikator dostępu, którego powinieneś
    używać, jeśli chcesz, aby określone atrybuty klasy bazowej były dostępne
    jedynie dla klas potomnych */

    Carp myLunch;
    Tuna myDinner;

    cout << "Przewidywane pożywienie: " << "\n";

    cout << "Obiad: ";
    myLunch.Swim(); // OUTPUT: ryby pływające w jeziorach

    cout << "Kolacja: ";
    myDinner.Swim(); // OUTPUT: ryby pływające w morzach

    // Usuń znak komentarza na początku poniższego wiersza, aby przekonać się,
    // że chronione elementy składowe są niedostępne na zewnątrz hierarchii klasy.
    // myLunch.FreshWaterFish = false; // #Error

    return 0;
}