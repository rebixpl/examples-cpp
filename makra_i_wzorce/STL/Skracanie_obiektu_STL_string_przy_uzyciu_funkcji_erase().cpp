// Skracanie obiektu STL string przy uzyciu funkcji erase()

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string strSample("Witaj ciągu tekstowy! Jfudx jfj, jrinrv dzień mamy!");
	cout << "Początkowa postać przykładowego ciągu tekstowego: " << "\n";
	cout << strSample << "\n" << "\n";
	
	// Usunięcie znaków z ciągu tekstowego na podstawie podanego położenia i liczby znakow.
	cout << "Usunięcie drugiego zdania: " << "\n";
	strSample.erase(23,32);
	cout << strSample << "\n" << "\n";
	
	// Wyszukanie znaku 'c' w ciągu tekstowym przy użyciu algorytmu STL find.
	string::iterator iCharC = find(strSample.begin(), strSample.end(), 'c');
	// Jeżeli znak zostanie znaleziony, funkcja erase() spowoduje usunięcie znaku
	cout << "Usunięcie znaku 'c' z przykładowego ciągu tekstowego: " << "\n";
	if (iCharC != strSample.end()){
		strSample.erase(iCharC);
	}
	cout << strSample << "\n" << "\n";
	
	// Usunięcie zakresu znaków za pomocą przeciążonej wersji funkcji erase()
	cout << "Usunięcie zakresu znaków od begin() do end(): " << "\n";
	strSample.erase(strSample.begin(), strSample.end());
	
	// Sprawdzenie długości ciągu po wykonaniu powyższej funkcji erase()
	if (strSample.length() == 0){
		cout << "ciag tekstowy jest pusty" << "\n";
	}
}
