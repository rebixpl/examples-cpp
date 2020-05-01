#include <iostream>

using namespace std;

int main()
{
    // Program nazwa dnia tygodnia
    enum DaysOfWeek
    {
        niedziela = 0,
        poniedzialek,
        wtorek,
        sroda,
        czwartek,
        piatek,
        sobota
    };

    cout << "Podanie nazwy, od której pochodzi nazwa dnia tygodnia!"
         << "\n";
    cout << "Podaj numer dnia tygodnia (niedziela = 0): ";
    int Day = niedziela; // Inicjalizacja dnia z wartością niedziela
    cin >> Day;
    
    if (Day == niedziela)
    {
        cout << "Nazwa niedziela oznacza dzień wolny (nie działać)"
             << "\n";
    }
    else if (Day == poniedzialek)
    {
        cout << "Nazwa poniedziałek oznacza dzień po niedzieli" << endl;
    }
    else if (Day == wtorek)
        cout << "Nazwa wtorek oznacza dzień wtóry, czyli drugi po niedzieli" << endl;
    else if (Day == sroda)
        cout << "Nazwa środa oznacza środkowy dzień tygodnia" << endl;
    else if (Day == czwartek)
        cout << "Nazwa czwartek oznacza czwarty dzień po niedzieli" << endl;
    else if (Day == piatek)
        cout << "Nazwa piątek oznacza piąty dzień po niedzieli" << endl;
    else if (Day == sobota)
        cout << "Nazwa sobota pochodzi od szabatu" << endl;
    else
        cout << "Błędne dane wejściowe, spróbuj raz jeszcze" << endl;
        
    return 0;
}