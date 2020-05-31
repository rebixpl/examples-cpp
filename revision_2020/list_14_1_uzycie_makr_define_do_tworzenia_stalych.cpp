#include <iostream>
using namespace std;

// SKŁADNIA
// #define identyfikator wartość
#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double

int main() {
	// Użycie dyrektywy #define do definiowania stałych
	
	int MyNumbers[ARRAY_LENGTH] = { 0 }; // Tablica 25 liczb całkowitych.

	cout << "Podaj promień: ";
	MY_DOUBLE Radius = 0;
	cin >> Radius;
	cout << "Pole wynosi: " << PI * Radius * Radius << endl; // OUTPUT: Pole wynosi: 1661.91

	return 0;
}