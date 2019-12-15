#include <iostream>

using namespace std;

class Date
{
private:
    int Day; //przyjmijmy ze zakres 1-30
    int Month;
    int Year;

public:
    //Konstruktor inicjalizujacy obiekt dla dnia, miesiaca i roku
    Date(int inputDay, int inputMonth, int inputYear)
        :Day(inputDay), Month(inputMonth), Year(inputYear) {};

    //Jednoargumentowy operator inkrementacji (PREFIX) ++x
    Date& operator ++ ()
    {
        ++Day;
        return *this;
    }

    //Jednoargumentowy operator inkrementacji (POSTFIX) x++
    Date operator ++ (int)
    {
        // Zachowanie kopii bieżącego stanu obiektu przed przeprowadzeniem inkrementacji dnia
        Date Copy(Day, Month, Year);

        ++Day;

        // Przywrócenie stanu sprzed inkrementacji
        return Copy;
    }

    //Jednoargumentowy operator dekrementacji (PREFIX) --x
    Date& operator -- ()
    {
        --Day;
        return *this;
    }

    //Jednoargumentowy operator dekrementacji (POSTFIX) x--
    Date operator -- (int)
    {
        Date Copy(Day, Month, Year);

        --Day;

        return Copy;
    }

    void DisplayDate()
    {
        cout << Day << " / " << Month << " / " << Year << "\n";
    }
};

int main()
{
    // Utworzenie i inicjalizacja obiektu wraz z datą 25 grudnia 2011 roku
    Date Holiday(25, 12, 2011);

    cout << "Obiekt zostal zainicjalizowany z data: ";
    Holiday.DisplayDate();

    //Zastosowanie prefiksowego operatora inkrementacji
    ++Holiday;

    cout << "Data po zastosowaniu prefiksowego operatora inkrementacji: ";
    Holiday.DisplayDate();

    --Holiday;
    --Holiday;

    cout << "Data po dwukrotnym zastosowaniu prefiksowego operatora dekrementacji: ";
    Holiday.DisplayDate();

    cout << "\n";

    Holiday--;
    Holiday++;
    Holiday++;
    --Holiday;
    ++Holiday;
    Holiday++;

    Holiday.DisplayDate();

    return 0;
}
