#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Użycie bitowych operatorów przesunięcia
    cout << "Podaj liczbe: ";
    int input = 0;
    cin >> input;

    double half = input >> 1;
    double quarter = input >> 2;
    double twice = input << 1;
    double quadruple = input << 2;

    cout << "half = " << half << "\n";
    cout << "quarter = " << quarter << "\n";
    cout << "twice = " << twice << "\n";
    cout << "quadruple = " << quadruple << "\n";

    return 0;
}
