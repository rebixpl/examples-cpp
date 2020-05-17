#include <iostream>

using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Konstruktor obiektu Animal" << "\n";
	}

	// Przykładowy atrybut
	int Age;
};

class Mammal : public virtual Animal
{
};

class Bird : public virtual Animal
{
};

class Reptile :public virtual Animal
{
};

class Platypus : public Mammal, public Bird, public Reptile
{
public:
	Platypus()
	{
		cout << "Konstruktor obiektu Platypus" << endl;
	}
};

int main(int argc, const char** argv) {
	/*Demonstracja, jak słowo kluczowe virtual w hierarchii
	dziedziczenia pomaga w ograniczeniu do jednego liczby egzemplarzy
	klasy bazowej Animal*/

	Platypus duckBilledP;

	// Kompilacja przebiegnie bez problemów, ponieważ jest tylko jeden atrybut Animal::Age.
	duckBilledP.Age = 25;

	// OUTPUT:
	/*Konstruktor obiektu Animal
	Konstruktor obiektu Platypus*/

	return 0;
}