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

    //Dwuargumentowy operator dodawania
    Date operator + (int DaysToAdd)
    {
        Date newDate(Day + DaysToAdd, Month, Year);
        return newDate;
    }

    //Dwuargumentowy operator odejmowania
    Date operator - (int DaysToSub)
    {
        Date newDate(Day - DaysToSub, Month, Year);
        return newDate;
    }

    void DisplayDate()
    {
        cout << Day << " / " << Month << " / " << Year << "\n";
    }
};

int main()
{
    Date Holiday(22,12,2019);

    cout << "Dzisiejszy dzien: ";
    Holiday.DisplayDate();

    Date PreviousHoliday(Holiday - 20);
    cout << "Dzisiejszy dzien - 19: ";
    PreviousHoliday.DisplayDate();

    Date NextHoliday(Holiday + 5);
    cout << "Dzisiejszy dzien + 5: ";
    NextHoliday.DisplayDate();

    return 0;
}
