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

	if (Holiday1 == Holiday2)
		cout << "Operator równości: to jest ten sam dzień" << "\n";
	else 
		cout << "Operator równości: to są dwa różne dni" << "\n";

	// OUTPUT: Operator r≤wno?ci: to s? dwa r≤?ne dni

	if(Holiday1 != Holiday2)
		cout << "Operator nierówności: to są dwa różne dni" << endl;
	else
		cout << "Operator nierówności: to jest ten sam dzień" << endl;

	// OUTPUT: Operator nier≤wno?ci: to s? dwa r≤?ne dni

	return 0;
}