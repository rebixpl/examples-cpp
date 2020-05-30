#include <iostream>
using namespace std;

class Fish
{
public:
	virtual void Swim()
	{
		cout << "Ryba plywa w wodzie" << endl;
	}

	// Klasa bazowa zawsze powinna zawierać wirtualny destruktor.
	virtual ~Fish() {}
};

class Tuna : public Fish
{
public:
	void Swim()
	{
		cout << "Tuńczyk pływa naprawdę szybko w morzu" << endl;
	}

	void BecomeDinner()
	{
		cout << "Dzisiaj na kolację będzie sushi z tuńczyka" << endl;
	}
};

class Carp : public Fish
{
public:
	void Swim()
	{
		cout << "Karp pływa naprawdę wolno w jeziorze" << endl;
	}

	void Talk()
	{
		cout << "Karpie nie mają głosu" << endl;
	}
};

void DetectFishType(Fish* InputFish)
{
	Tuna* pIsTuna = dynamic_cast<Tuna*>(InputFish);
	if (pIsTuna)
	{
		cout << "Wykryto tuńczyka. Tuńczyk będzie na kolację: " << endl;
		pIsTuna->BecomeDinner(); // Wywołanie metody Tuna::BecomeDinner
	}

	Carp* pIsCarp = dynamic_cast<Carp*>(InputFish);
	if (pIsCarp)
	{
		cout << "Wykryto karpia. Karp będzie na kolację: " << endl;
		pIsCarp->Talk(); // Wywołanie metody Carp::Talk.
	}

	cout << "Sprawdzenie typu przy użyciu metody wirtualnej Fish::Swim: " << endl;
	InputFish->Swim(); // Wywołanie metody wirtualnej Swim.
}

int main() {
	// Użycie dynamic_cast i identyfikacja typu w czasie działania
	
	Carp myLunch;
	Tuna myDinner;

	DetectFishType(&myDinner); // OUTPUT:  Wykryto tu?czyka. Tu?czyk b?dzie na kolacj?:
							// Dzisiaj na kolacj ? b ? dzie sushi z tu ? czyka
							//Sprawdzenie typu przy u ? yciu metody wirtualnej Fish::Swim :
							//	Tu ? czyk p ? ywa naprawd ? szybko w morzu
	cout << endl;
	DetectFishType(&myLunch); // OUTPUT: Wykryto karpia. Karp b?dzie na kolacj?:
								//Karpie nie maj ? g ? osu
								//Sprawdzenie typu przy u ? yciu metody wirtualnej Fish::Swim :
								//Karp p ? ywa naprawd ? wolno w jeziorze

	return 0;
}