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

	// Dwuargumentowy operator dodawania
	Date operator + (int DaysToAdd)
	{
		Date newDate(Day + DaysToAdd, Month, Year);
		return newDate;
	}

	// Dwuargumentowy operator odejmowania
	Date operator - (int DaysToSub) 
	{
		return Date(Day - DaysToSub, Month, Year);
	}

	void DisplayDate() {
		cout << Day << " / " << Month << " / " << Year << "\n";
	}
};

int main() {
	/* Klasa kalendarza obsługująca dwuargumentowy operator dodawania */

	// Utworzenie i inicjalizacja obiektu wraz z dat 25 grudnia 2011 roku
	Date Holiday(25, 12, 2011);

	cout << "Dzień świąteczny: ";
	Holiday.DisplayDate(); // OUTPUT: 25 / 12 / 2011

	Date previousHoliday(Holiday - 19); // Usage of '-' operator
	cout << "Poprzedni dzień świąteczny: ";
	previousHoliday.DisplayDate(); // OUTPUT:  6 / 12 / 2011

	Date nextHoliday(Holiday + 6); // Usage of '+' operator
	cout << "Następny dzień świąteczny: ";
	nextHoliday.DisplayDate(); // OUTPUT:  31 / 12 / 2011

	return 0;
}