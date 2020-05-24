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

	// Dwuargumentowy operator dodawania.
	void operator+= (int DaysToAdd)
	{
		Day += DaysToAdd;
	}

	// Dwuargumentowy operator odejmowania
	void operator-= (int DaysToSub)
	{
		Day -= DaysToSub;
	}

	void DisplayDate() {
		cout << Day << " / " << Month << " / " << Year << "\n";
	}
};

int main() {
	/* Użycie operatora dodawania/przypisania
	i odejmowania/przypisania w celu dodania lub odjęcia dni
	w podanej dacie o wartość w postaci liczby całkowitej */

	// Utworzenie i inicjalizacja obiektu wraz z dat 25 grudnia 2011 roku
	Date Holiday(25, 12, 2011);

	cout << "Dzień świąteczny: ";
	Holiday.DisplayDate(); // OUTPUT: 25 / 12 / 2011

	cout << "Dzień świąteczny -= 19 daje: ";
	Holiday -= 19;
	Holiday.DisplayDate(); // OUTPUT: 6 / 12 / 2011

	cout << "Dzień świąteczny += 25 daje: ";
	Holiday += 25;
	Holiday.DisplayDate(); // OUTPUT: 25 daje: 31 / 12 / 2011

	return 0;
}