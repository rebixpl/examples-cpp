#include <iostream>
#include <string>

using namespace std;

string zmienna1, zmienna2;

int demoReturnFunction(){
	cout << "To jest prosty, dosłowny ciąg tekstowy" << endl;
 	cout << "Wyświetlenie liczby pięć: " << 5 << endl;
 	cout << "Operacja dzielenia 10 / 5 = " << 10 / 5 << endl;
 	cout << "Przybliżona wartość Pi 22 / 7 = " << 22 / 7 << endl;
 	cout << "Dokładniejsza wartość Pi 22 / 7 = " << 22.0 / 7 << endl;

 	cin >> zmienna1 >> zmienna2;

 	cout << zmienna1 + zmienna2 << endl;
 	return 0;
}

int main() {
	return demoReturnFunction();
}
