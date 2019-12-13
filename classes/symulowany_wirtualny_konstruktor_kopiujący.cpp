#include <iostream>

using namespace std;

class Fish
{
public:
    virtual Fish* Clone() = 0; //Funkcja czysto wirtuanlna
    virtual void Swim() = 0;
};

class Tuna: public Fish
{
public:
    Fish* Clone()
    {
        return new Tuna(*this);
    }

    void Swim()
    {
        cout << "Tunczyk plywa szybko w morzu!" << "\n";
    }
};

class Carp: public Fish
{
public:
    Fish* Clone()
    {
        return new Carp(*this);
    }

    void Swim()
    {
        cout << "Karp plywa powoli w jeziorze!" << "\n";
    }
};

int main()
{
    const int ARRAY_SIZE = 4;

    Fish* myFishes[ARRAY_SIZE] = {nullptr};
    myFishes[0] = new Tuna();
    myFishes[1] = new Carp();
    myFishes[2] = new Tuna();
    myFishes[3] = new Carp();

    Fish* myNewFishes[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; ++i)
        myNewFishes[i] = myFishes[i]->Clone();

    //Wywołanie metody wirtualnej
    for(int i = 0; i < ARRAY_SIZE; i++)
        myNewFishes[i]->Swim();

    //zwolnienie pamieci
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        delete myFishes[i];
        delete myNewFishes[i];
    }

    return 0;
}
