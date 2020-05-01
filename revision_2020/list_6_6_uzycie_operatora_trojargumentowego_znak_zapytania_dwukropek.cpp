#include <iostream>

using namespace std;

int main()
{
    // Wykonywanie warunkowe przy użyciu operatora ?:

    //? UZYCIE:
    //(wyrażenie warunkowe jako wartość typu bool) ? wyrażenie1 jeśli true : wyrażenie2 jeśli false

    cout << "podaj dwie liczby: "
         << "\n";
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;

    int Max = (num1 > num2) ? num1 : num2;

    cout << "Sposrod " << num1 << " i "
         << num2 << " wieksza liczba jest: " << Max << endl;

    return 0;
}
