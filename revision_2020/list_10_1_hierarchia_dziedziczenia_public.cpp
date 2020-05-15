#include <iostream>
#include <string.h>

using namespace std;

class Fish
{
public:
    bool FreshWaterFish;

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
        FreshWaterFish = false;
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
    // hierarchia dziedziczenia

    Carp myLunch;
    Tuna myDinner;

    cout << "Przewidywane pożywienie: " << "\n";

    cout << "Obiad: ";
    myLunch.Swim(); // OUTPUT: ryby pływające w jeziorach

    cout << "Kolacja: ";
    myDinner.Swim(); // OUTPUT: ryby pływające w morzach

    return 0;
}