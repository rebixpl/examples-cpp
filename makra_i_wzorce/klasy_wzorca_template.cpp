//!   klasy wzorca 'template'
//*   umozliwiaja podanie "typu" dla ktorego wyspecjalizowana jest klasa

#include <iostream>

template <typename T>
class MyFirstTemplateClass{
public:
	void SetValue(const T& newValue) { Value = 		newValue; }
	const T& GetValue() const { return Value; }
private:
	T Value;
};

//? Deklaracja klasy wzorca Human
template <typename T>
class CustomizableHuman{
public:
	void SetAge(const T& newValue) { Age = newValue; }
	const T& GetAge() const {return Age;}
	
private:
	T Age;
};

int main(){
	//? Wykorzystanie klasy wzorca z typem 'int'
	MyFirstTemplateClass <int> mHoldInteger; // ustanowienie wzorca
	mHoldInteger.SetValue(23);
	
	std::cout << "przechowywana wartosc to: " << mHoldInteger.GetValue();
	
	
	
	//? Wykorzystanie klasy wzorca z typem 'char*'
	MyFirstTemplateClass <char*> mHoldString;
	mHoldString.SetValue("8======3 jebac disa orka");
	std::cout << "\n" << "przechowywana wartosc to: " << mHoldString.GetValue();
	
	
	
	//? Uzycie klasy wzorca 'Human'
	CustomizableHuman <int> NormalLifeSpan;
	NormalLifeSpan.SetAge(80);
	
	CustomizableHuman <long long> LongLifeSpan;
	LongLifeSpan.SetAge(746363637);
	
	CustomizableHuman <short> ShortLifeSpan;
	ShortLifeSpan.SetAge(40);
	
	
	return 0;
}
