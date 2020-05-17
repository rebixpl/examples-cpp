#include <iostream>

using namespace std;

class Fish
{
public:
	// Definicja funkcji czysto wirtualnej o nazwie Swim().
	virtual void Swim() = 0;
};

class Tuna : public Fish
{
public:
	void Swim() {
		cout << "Tuńczyk pływa szybko w morzu!" << "\n";
	}
};

class Carp : public Fish
{
public:
	void Swim() {
		cout << "Karp pływa powoli w jeziorze!" << "\n";
	}
};

void MakeFishSwim(Fish& inputFish)
{
	inputFish.Swim();
}

int main(int argc, const char** argv) {
	// 

	/*Klasa bazowa, której egzemplarza nie można utworzyć, nosi nazwę abstrakcyjnej
	klasy bazowej.Tego rodzaju klasy bazowe służą do jednego celu : inne klasy mają
	dziedziczyć po niej.*/

	// Fish myFish; // Błąd, brak możliwości utworzenia abstrakcyjnej klasy bazowej.
	Carp myLunch;
	Tuna myDinner;

	MakeFishSwim(myLunch); // OUTPUT: Karp p?ywa powoli w jeziorze!
	MakeFishSwim(myDinner); // OUTPUT: Tu?czyk p?ywa szybko w morzu! 

	return 0;
}