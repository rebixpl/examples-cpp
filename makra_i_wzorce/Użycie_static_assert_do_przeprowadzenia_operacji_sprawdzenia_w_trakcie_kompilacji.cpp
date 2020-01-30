//!  Użycie static_assert do przeprowadzenia operaxji sprawdzenia w trakcie kompilacji
//*	Składnia:
//*	static_assert(sprawdzane wyrażenie, "Komunikat błędu w przypadku niepowodzenia");

#include <iostream>
using namespace std;

template <typename T>
class EverythingButInt{
public:
	EverythingButInt(){
		static_assert(sizeof(T) != sizeof(int), "Typ int jest niedozwolony.");
	}
};

int main(){
	// utworzenie egzemplarza typu int
	EverythingButInt<int> test; // OUTPUT: error
	
	return 0;
}
