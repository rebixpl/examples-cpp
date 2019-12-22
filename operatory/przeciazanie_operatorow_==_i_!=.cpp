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

    bool operator == (const Date& compareTo)
    {
        return ((Day == compareTo.Day)
                && (Month == compareTo.Month)
                && (Year == compareTo.Year));
    }

    bool operator != (const Date& compareTo)
    {
        return !(this->operator==(compareTo));
    }

    void DisplayDate()
    {
         cout << Day << " / " << Month << " / " << Year << "\n";
    }

};

int main()
{
    Date Holiday1(25, 12, 2019);
    Date Holiday2(31, 12, 2019);

    cout << "Dzien swiateczny 1: ";
    Holiday1.DisplayDate();
    cout << "Dzien swiateczny 2: ";
    Holiday2.DisplayDate();

    if(Holiday1 == Holiday2)
        cout << "Operator rownosci: to jest ten sam dzien" << "\n";
    else
        cout << "Operator rownosci: to sa dwa rozne dni" << "\n";

    if(Holiday1 != Holiday2)
        cout << "Operator nierownosci: to sa dwa rozne dni" << "\n";
    else
        cout << "Operator nierownosci: to jest ten sam dzien" << "\n";

    return 0;
}
