#include <iostream>
#include <string>
using namespace std;

class cDisplay
{
public:
	void operator() (string Input) const
	{
		cout << Input << endl;
	}
};

int main() {
	// Obiekt funkcji zaimplementowany za pomocą funkcji operator()

	cDisplay drukuj;

	// Odpowiednik wywołania drukuj.operator () ("Wyświetl ten ciąg tekstowy!");.
	drukuj("Wyświetl ten ciąg tekstowy!"); // OUTPUT: Wy?wietl ten ci?g tekstowy! 

	return 0;
}