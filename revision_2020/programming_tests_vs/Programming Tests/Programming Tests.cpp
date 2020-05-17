#include <iostream>

using namespace std;

class Fish
{
public:
	virtual Fish* Clone() = 0;
	virtual void Swim() = 0;
};

class Tuna : public Fish
{
public:
	Fish* Clone()
	{
		return new Tuna(*this);
	}
	void Swim()
	{
		cout << "Tuńczyk pływa szybko w morzu" << endl;
	}
};

class Carp : public Fish
{
public:
	Fish* Clone() {
		return new Carp(*this);
	}

	void Swim()
	{
		cout << "Karp pływa powoli w jeziorze" << endl;
	}
};

int main(int argc, const char** argv) {
	/*W ten sposób funkcja wirtualna Clone() jest symulowanym wirtualnym
	konstruktorem kopiującym, który trzeba wyraźnie wywołać,*/

	const int ARRAY_SIZE = 4;

	Fish* myFishes[ARRAY_SIZE] = { NULL };
	myFishes[0] = new Tuna();
	myFishes[1] = new Carp();
	myFishes[2] = new Tuna();
	myFishes[3] = new Carp();

	Fish* myNewFishes[ARRAY_SIZE];
	for (int Index = 0; Index < ARRAY_SIZE; ++Index) {
		myNewFishes[Index] = myFishes[Index]->Clone();
	}

	// Wywołanie metody wirtualnej
	for (int Index = 0; Index < ARRAY_SIZE; ++Index) {
		myNewFishes[Index]->Swim();
	}

	// Zwolnienie pamięci
	for (int Index = 0; Index < ARRAY_SIZE; ++Index) {
		delete myFishes[Index];
		delete myNewFishes[Index];
	}

	//OUTPUT:
	/*Tu ? czyk p ? ywa szybko w morzu
	Karp p ? ywa powoli w jeziorze
	Tu ? czyk p ? ywa szybko w morzu
	Karp p ? ywa powoli w jeziorze*/

	return 0;
}