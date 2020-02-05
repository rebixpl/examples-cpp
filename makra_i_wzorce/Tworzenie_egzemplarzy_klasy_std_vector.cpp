// tworzenie egzemplarzy klasy std::vector

#include <iostream>
#include <vector>

int main()
{
	std::vector <int> vecIntegers;
	
	// Ustanowienie tablicy wraz z dziesięcioma elementami (tablicę będzie można powiększyć)
	std::vector <int> vecWithTenElements (10);
	
	// Ustanowienie tablicy wraz z dziesięcioma elementami, każdy zainicjalizowany z wartoscia 90
	std::vector <int> vecWithTenInitializedElements (10, 90);
	
	// Ustanowienie tablicy i zainicjalizowanie jej zawartością innej tablicy.
	std::vector <int> vevArrayCopy (vecWithTenInitializedElements);
	
	// Ustanowienie tablicy wraz z pięcioma elementami pochodzącymi z innej tablicy.
	std::vector <int> vecSomeElementsCopied (vecWithTenElements.cbegin(), vecWithTenElements.cbegin() + 5);
	
	return 0;
}
