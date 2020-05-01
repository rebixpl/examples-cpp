#include <iostream>

using namespace std;

const double Pi = 22.0 / 7;

// Deklaracja funkcji zawiera dwa parametry.
double SurfaceArea(double radius, double height);

int main()
{
    // Funkcja akceptująca dwa parametry i przeznaczona do obliczenia pola walca
    cout << "Podaj promień walca: ";
    double inRadius = 0;
    cin >>inRadius;

    cout << "Podaj wysokość walca: ";
    double inHeight = 0;
    cin>>inHeight;
    
    cout << "Pole walca wynosi: " << SurfaceArea(inRadius, inHeight) << endl;
    
    return 0;
}

double SurfaceArea(double radius, double height){
    return 2 * Pi * radius * radius + 2 * Pi * radius * height;
}