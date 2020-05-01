#include <iostream>

using namespace std;

const double Pi = 22.0 / 7;

double Area(double Radius);                // Funkcja obliczająca pole okręgu
double Area(double Radius, double Height); // Funkcja obliczająca pole walca

int main()
{
    // Użycie przeciążonej funkcji do obliczenia pola okręgu lub walca
    cout << "Aby obliczyc pole walca, nacisnij z, okregu, nacisnij c: ";
    char Choice = 'z';
    cin >> Choice;

    cout << "Podaj promien: ";
    double Radius = 0;
    cin >> Radius;

    if (Choice == 'z')
    {
        cout << "Podaj wysokosc walca";
        double Height = 0;
        cin >> Height;
        cout << "Pole walca wynosi: " << Area(Radius, Height) << endl;
    }
    else
    {
        cout << "Pole okręgu wynosi: " << Area(Radius) << endl;
    }

    return 0;
}

// Obliczenie pola okręgu.
double Area(double Radius)
{
    return Pi * Radius * Radius;
}

// Przeciążona funkcja dla walca.
double Area(double Radius, double Height)
{
    return 2 * Area(Radius) + 2 * Pi * Radius * Height;
}