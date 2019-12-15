#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Date
{
private:
    int Day; //przyjmijmy ze zakres 1-30
    int Month;
    int Year;

    string DateInString;

public:
    //Konstruktor inicjalizujacy obiekt dla dnia, miesiaca i roku
    Date(int inputDay, int inputMonth, int inputYear)
        :Day(inputDay), Month(inputMonth), Year(inputYear) {};

    operator const char* ()
    {
         // Implementacja operatora, którego wartością zwrotną jest char*.
         ostringstream formattedDate;
         formattedDate << Day << " / " << Month << " / " << Year;

         DateInString = formattedDate.str();
         return DateInString.c_str();

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

    cout << "Dzien swiateczny: " << Holiday << "\n";

    return 0;
}
