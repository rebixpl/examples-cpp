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

    bool operator== (const Date& compareTo)
    {
        return ((Day == compareTo.Day)
                && (Month == compareTo.Month)
                && (Year == compareTo.Year));
    }

    bool operator< (const Date& compareTo)
    {
        if(Year < compareTo.Year)
            return true;
        else if (Month < compareTo.Month)
            return true;
        else if (Day < compareTo.Day)
            return true;
        else
            return false;
    }

    bool operator<= (const Date& compareTo)
    {
        if(this->operator== (compareTo))
            return true;
        else
            return this->operator< (compareTo);
    }

    bool operator> (const Date& compareTo)
    {
        return !(this->operator<= (compareTo));
    }

    bool operator>= (const Date& compareTo)
    {
        if(this->operator== (compareTo))
            return true;
        else
            return this->operator> (compareTo);
    }

    bool operator!= (const Date& compareTo)
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

    if(Holiday1 < Holiday2)
        cout << "operator < : pierwszy dzien swiateczny bedzie wczesniej" << "\n";

    if(Holiday2 > Holiday1)
        cout << "operator > : drugi dzien swiateczny bedzie pozniej" << "\n";

    if(Holiday1 <= Holiday2)
        cout << "operator <= : pierwszy dzien swiateczny jest wczesniej lub tego samego dnia" << "\n";

    if(Holiday2 >= Holiday1)
        cout << "operator >= : drugi dzien swiateczny jest pozniej lub tego samego dnia" << "\n";

    return 0;
}
