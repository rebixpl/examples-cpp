#include <iostream>
#include <string.h>

using namespace std;

class FishDummyMember
{
public:
    FishDummyMember()
    {
        cout << "Konstruktor FishDummyMember"
             << "\n";
    }

    ~FishDummyMember()
    {
        cout << "Destruktor FishDummyMember"
             << "\n";
    }
};

class Fish
{
protected:
    FishDummyMember dummy;

public:
    Fish()
    {
        cout << "Konstruktor Fish"
             << "\n";
    }

    ~Fish()
    {
        cout << "Destruktor Fish"
             << "\n";
    }
};

class TunaDummyMember
{
public:
    TunaDummyMember()
    {
        cout << "Konstruktor TunaDummyMember"
             << "\n";
    }

    ~TunaDummyMember()
    {
        cout << "Destruktor TunaDummyMember"
             << "\n";
    }
};

class Tuna : public Fish
{
private:
    TunaDummyMember dummy;

public:
    Tuna()
    {
        cout << "Konstruktor Tuna"
             << "\n";
    }

    ~Tuna()
    {
        cout << "Destruktor Tuna"
             << "\n";
    }
};

int main(int argc, const char **argv)
{
    Tuna myTuna;

    // OUTPUT
    // Konstruktor FishDummyMember
    // Konstruktor Fish
    // Konstruktor TunaDummyMember
    // Konstruktor Tuna
    // Destruktor Tuna
    // Destruktor TunaDummyMember
    // Destruktor Fish
    // Destruktor FishDummyMember
    // OUTPUT

    return 0;
}