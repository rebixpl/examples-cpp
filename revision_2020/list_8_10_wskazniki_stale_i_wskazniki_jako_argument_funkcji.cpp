#include <iostream>

using namespace std;

void CalcArea(const double *const pPi,     // Stała wskaźnika do stałej danych.
              const double *const pRadius, // Nic nie można zmienić.
              double *const pArea          // Zmiana wskazywanej wartości, a nie adresu.
)
{
    // Przed uzyciem wskaznikow nalezy je sprawdzic
    if (pPi && pRadius && pArea)
    {
        *pArea = (*pPi) * (*pRadius) * (*pRadius);
    }
}

int main(int argc, const char **argv)
{
    //

    const double Pi = 22 / 7;

    cout << "Podaj promien okregu: ";
    double Radius = 0;
    cin >> Radius;

    double Area = 0;
    CalcArea(&Pi, &Radius, &Area);

    cout << "Pole wynosi = " << Area << "\n";

    return 0;
}
