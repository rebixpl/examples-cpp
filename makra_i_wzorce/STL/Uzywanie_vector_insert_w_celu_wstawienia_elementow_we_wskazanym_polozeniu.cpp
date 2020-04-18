// Używanie vector::insert w celu wstawiania elementówwe wskazanym położeniu

#include <iostream>
#include <vector>
using namespace std;

void DisplayVector(const vector<int>& vecInput){
	for (auto iElement = vecInput.cbegin(); iElement != vecInput.cend(); ++iElement){
		cout << *iElement << ' ';
	}
	cout << "\n";
}

int main(){
	// Ustanowienie obiektu vector wraz z czterema elementami, każdy zainicjalizowany z waroscia 90
	vector <int> vecIntegers (4, 90);
	
	cout << "Początkowa zawartość obiektu vector jest następująca: ";
	DisplayVector(vecIntegers);
	
	// Wstawienie wartości 25 na początku.
	vecIntegers.insert(vecIntegers.begin(), 25);
	
	// Wstawienie na końcu dwóch liczb o wartości 45.
	vecIntegers.insert(vecIntegers.end(), 2, 45);
	
	cout << "Zawartość tablicy vector po wstawieniu elementów na początku i końcu: ";
	DisplayVector(vecIntegers);
	
	// Inny obiekt vector zawierający dwa elementy o wartości 30
	vector <int> vecAnother (2, 30);
	
	// Wstawienie w pozycji [1] dwóch elementów pochodzących z innego kontenera.
	vecIntegers.insert(vecIntegers.begin() + 1, vecAnother.begin(), vecAnother.end());
	
	cout << "Zawartość obiektu vector po wstawieniu w środku tablicy ";
	cout << "elementów innego obiektu:" << "\n";
	DisplayVector(vecIntegers);
}
