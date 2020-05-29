#include <iostream>
using namespace std;

class Date
{
private:
	int Day;
	int Month;
	int Year;

public:
	// Konstruktor inicjalizujący obiekt dla dnia, miesiąca i roku.
	Date(int InputDay, int InputMonth, int InputYear)
		: Day(InputDay), Month(InputMonth), Year(InputYear) {};

	bool operator== (const Date& compareTo)
	{
		return ((Day == compareTo.Day) && (Month == compareTo.Month) && (Year == compareTo.Year));
	}

	bool operator< (const Date& compareTo)
	{
		if (Year < compareTo.Year)
			return true;
		else if (Month < compareTo.Month)
			return true;
		else if (Day < compareTo.Day)
			return true;
		else 
			return false;

	}

	bool operator <= (const Date& compareTo)
	{
		if (this->operator<(compareTo))
			return true;
		else
			return this->operator<(compareTo);
	}

	bool operator> (const Date& compareTo)
	{
		return !(this->operator<= (compareTo));
	}

	bool operator>= (const Date& compareTo)
	{
		if (this->operator==(compareTo))
			return true;
		else
			return this->operator>(compareTo);
	}

	bool operator!= (const Date& compareTo)
	{
		return !(this->operator==(compareTo));
	}

	void DisplayDate() {
		cout << Day << " / " << Month << " / " << Year << "\n";
	}
};

int main() {
	// Przeciążanie operatorów równości (==) i nierówności (!=)

	Date Holiday1(25, 12, 2011);
	Date Holiday2(31, 12, 2011);

	cout << "Dzień świąteczny 1: ";
	Holiday1.DisplayDate(); // OUTPUT: 25 / 12 / 2011

	cout << "Dzień świąteczny 2: ";
	Holiday2.DisplayDate(); // OUTPUT:  31 / 12 / 2011

	if (Holiday1 < Holiday2)
		cout << "operator <: pierwszy dzień świąteczny będzie wcześniej" << "\n";

	if (Holiday2 > Holiday1)
		cout << "operator >: drugi dzień świąteczny będzie później" << endl;

	if (Holiday1 <= Holiday2)
		cout << "operator <=: pierwszy dzień świąteczny jest wcześniej lub tego samego dnia" << endl;

	if (Holiday2 >= Holiday1)
		cout << "operator >=: drugi dzień świąteczny jest później lub tego samego dnia" << endl;

	return 0;
}