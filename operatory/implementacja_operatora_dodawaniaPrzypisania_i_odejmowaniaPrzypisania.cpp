#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
    int Day, Month, Year;

public:
    Date(int inputDay, int inputMonth, int inputYear)
        :Day(inputDay), Month(inputMonth), Year(inputYear) {};

    //Dwuargumentowy opeartor dodawania
    Date operator += (int DaysToAdd)
    {
        Day += DaysToAdd;
    }

    //Dwuargumentowy operator odejmowania
    Date operator -= (int DaysToSub)
    {
        Day -= DaysToSub;
    }

    void DisplayDate()
    {
        cout << Day << " / " << Month << " / " << Year << "\n";
    }
};

int main()
{
    Date Holiday(25,12,2011);

    cout << "Dzien swiateczny: ";
    Holiday.DisplayDate();

    cout << "Dzien swiateczny -= 19 daje: ";
    Holiday -= 19;
    Holiday.DisplayDate();

    cout << "Dzien swiateczny += 25 daje: ";
    Holiday += 25;
    Holiday.DisplayDate();

    return 0;
}
