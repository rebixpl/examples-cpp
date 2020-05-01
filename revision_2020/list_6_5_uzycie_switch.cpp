#include <iostream>

using namespace std;

int main()
{
    // Uzycie konstrukcji case switch wraz z enum
    enum daysOfWeek
    {
        niedziela = 0,
        poniedzialek,
        wtorek,
        sroda,
        czwartek,
        piatek,
        sobota
    };

    cout << "Podanie nazwy, od której pochodzi nazwa dnia tygodnia!" << endl;
    cout << "Podaj numer dnia tygodnia (niedziela = 0): ";

    int Day = niedziela; // Inicjalizacja dnia z wartością niedziela.
    cin >> Day;

    //! Usage of switch expression
    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }

    switch (Day)
    {
    case niedziela:
        cout << "Nd"
             << "\n";
        break;

    case poniedzialek:
        cout << "Pn"
             << "\n";
        break;

    case wtorek:
        cout << "Wt"
             << "\n";
        break;

    case sroda:
        cout << "Sr"
             << "\n";
        break;

    case czwartek:
        cout << "Czw"
             << "\n";
        break;

    case piatek:
        cout << "Pt"
             << "\n";
        break;

    case sobota:
        cout << "Sb"
             << "\n";
        break;

    default:
        cout << "Podales niepoprawny dzien tygodnia!"
             << "\n";
        break;
    }
    return 0;
}
