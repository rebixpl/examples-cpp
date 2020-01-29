//!   deklarowanie wzorcow z parametrami domyslnymi

//? zadeklarowanie klasy z domyslnym typem 'int'
/*
template <typename T1 = int, typename T2 = int>
class HoldsPair{
	// deklaracje metod
} 

// ustanowienie wzorca ktory paruje typ int z typem int (z typem domyslnym)
HoldsPair <> pairDouble(6, 500);
*/

#include <iostream>
using namespace std;

// Deklaracja domyślnych typów parametrów: pierwszy to int, natomiast drugi to double
template <typename T1 = int, typename T2 = double>
class HoldsPair{
private:
	T1 Value1;
	T2 Value2;
public:
	// Konstruktor inicjalizujacy zmienne skladowe
	HoldsPair (const T1& value1, const T2& value2){
		Value1 = value1;
		Value2 = value2;
	};
	
	// funkcja akcesora
	const T1& GetFirstValue() const{
		return Value1;
	};
	
	const T2& GetSecondValue() const{
		return Value2;
	};
};

int main(){
	// Utworzenie dwóch egzemplarzy klasy wzorca HoldsPair.
	HoldsPair <> mIntFloatPair(300, 10.09);
	HoldsPair <short, char*> mShortStringPair(25, "Jd sjdjjdjdjs");
	
	// Wartości danych wyjściowych znajdujące się w pierwszym obiekcie…
	cout << "Pierwszy obiekt zawiera -" << endl;
	cout << "Wartość 1: " << mIntFloatPair.GetFirstValue () <<  endl;
	cout << "Wartość 2: " << mIntFloatPair.GetSecondValue () << endl;
	
	//Wartości danych wyjściowych znajdujące się w drugim obiekcie…
	cout << "Drugi obiekt zawiera -" << endl;
	cout << "Wartość 1: " << mShortStringPair.GetFirstValue () <<  endl;
	cout << "Wartość 2: " << mShortStringPair.GetSecondValue () << endl;
	
	return 0;
}
