#include <iostream>
#include <string>
using namespace std;

int main() {
	// Uzycie static_cast

	double dPi = 3.14159265;
	int Num = static_cast<int>(dPi);	// Rzutowanie jawne, które w innym przypadku
										// pozostaje niejawne.
	cout << "dPi = " << dPi << "\n"; // OUTPUT: dPi = 3.14159
	cout << "Num = " << Num << "\n"; // OUTPUT: Num = 3


	// <------------------------------------------->
	//Rzutowanie Derived* na Base* jest nazywane rzutowaniem w górę i może być
	//przeprowadzone bez wyraźnego użycia operatora rzutowania :
	
	//Derived objDerived;
	//Base* pBase = &objDerived;		// OK!

	//Rzutowanie Base* na Derived* jest nazywane rzutowaniem w dół i nie może
	//	być przeprowadzone bez wyraźnego użycia operatora rzutowania :

	//Derived objDerived;
	//Base* pBase = &objDerived;		// Rzutowanie w górę -> OK!
	//Derived* pDerived = pBase;		 // Błąd: rzutowanie w dół wymaga wyraźnego użycia
	//								// operatora rzutowania.

	return 0;
}