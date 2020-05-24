#include <iostream>
using namespace std;

// Klasa kalendarza obsługująca dni, miesiące i lata,
// która pozwala na przeprowadzanie inkrementacji dni
class Date
{
private:
	int Day; // Zakres: 1 - 30
	int Month;
	int Year;

public:
	// Konstruktor inicjalizujący obiekt dla dnia, miesiąca i roku.
	Date(int InputDay, int InputMonth, int InputYear)
		: Day(InputDay), Month(InputMonth), Year(InputYear) {};

	// Jednoargumentowy operator inkrementacji (prefiks).
	Date& operator++()
	{
		++Day;
		return *this;
	}

	// Jednoargumentowy operator dekrementacji (prefiks).
	Date& operator--()
	{
		--Day;
		return *this;
	}

	void DisplayDate() {
		cout << Day << " / " << Month << " / " << Year << "\n";
	}
};

int main() {
	/* Programowanie jednoargumentowego operatora inkrementacji i dekrementacji */

	// Utworzenie i inicjalizacja obiektu wraz z datą 25 grudnia 2011 roku.
	Date Holiday(25, 12, 2011);

	cout << "Obiekt został zainicjalizowany z datą: ";
	Holiday.DisplayDate();

	// Zastosowanie prefiksowego operatora inkrementacji
	++Holiday;

	cout << "Data po zastosowaniu prefiksowego operatora inkrementacji: ";

	// Wyświetlenie daty po inkrementacji
	Holiday.DisplayDate(); // OUTPUT: 26 / 12 / 2011

	--Holiday;
	--Holiday;

	cout << "Data po dwukrotnym zastosowaniu prefiksowego operatora dekrementacji: ";
	Holiday.DisplayDate(); // OUTPUT:  24 / 12 / 2011

	return 0;
}