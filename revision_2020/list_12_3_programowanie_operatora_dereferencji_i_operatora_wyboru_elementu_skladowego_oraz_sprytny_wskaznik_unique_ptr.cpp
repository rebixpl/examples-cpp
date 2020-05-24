#include <iostream>
#include <memory> // To polecenie jest konieczne w celu użycia std::unique_ptr.
using namespace std;

class Date
{
private:
	int Day; // Zakres: 1 - 30
	int Month;
	int Year;

	string DateInString;

public:
	// Konstruktor inicjalizujący obiekt dla dnia, miesiąca i roku.
	Date(int InputDay, int InputMonth, int InputYear)
		: Day(InputDay), Month(InputMonth), Year(InputYear) {};

	void DisplayDate() {
		cout << Day << " / " << Month << " / " << Year << "\n";
	}
};

int main() {
	/* Programowanie operatora dereferencji (*)
	i operatora wyboru elementu składowego (->)
	oraz sprytny wskaznik unique_ptr */

	unique_ptr<int> pDynamicAllocInteger(new int);
	*pDynamicAllocInteger = 42;

	// Użycie sprytnego wskaźnika typu, takiego jak int*
	cout << "Liczba calkowita to: " << *pDynamicAllocInteger << endl; // OUTPUT: Liczba calkowita to: 42

	unique_ptr<Date> pHoliday(new Date(25,11,2011));
	cout << "Nowy egzemplarz daty zawiera: ";

	// Użycie pHoliday w taki sposób, jakby to był Date*.
	pHoliday->DisplayDate(); // OUTPUT: Nowy egzemplarz daty zawiera: 25 / 11 / 2011

	// Podczas używania unique_ptr poniższe polecenia są zbędne:
	// delete pDynamicAllocInteger
	// delete pHoliday

	return 0;
}