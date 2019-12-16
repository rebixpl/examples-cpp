#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3;
    cout << "Podaj trzy liczby: ";
    cin >> a1 >> a2 >> a3;

    cout.fill('.'); //cout.fill('znak') -> wypelnianie pola o nadmiernej szerokosci danym znakiem
    cout.width(20); //cout.width(wartosc) -> ustalanie szerokosci pola danej lini tekstu
    cout << "Pierwsza liczba: ";
    cout.width(10);
    cout << a1 << "\n";
    cout.width(20);
    cout << "Druga liczba: ";
    cout.width(10);
    cout << a2 << "\n";
    cout.width(20);
    cout << "Trzecia liczba: ";
    cout.width(10);
    cout << a3 << "\n";

    double a;
    cout << "\a" << "Podaj liczbe rzeczywista (z kropka): ";
    cin >> a;
    cout.precision(2); // cout.precision(ilosc znakow po przecinku) -> ustawia maksymalna ilosc znakow po przecinku
    cout << "1 / " << a << " = " << 1/a << "\n";

    system("PAUSE");

    return 0;
}
