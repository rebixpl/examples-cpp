// Wstawianie elementów w obiekcie vector za pomocą metody push_back()

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vecIntegers; // deklaracja obiektu vector typu int
	
	// Wstawienie do obiektu vector przykładowych liczb całkowitych.
	vecIntegers.push_back(50);
	vecIntegers.push_back(1);
	vecIntegers.push_back(987);
	vecIntegers.push_back(1001);
	
	cout << "Obiekt vector zawiera ";
	cout << vecIntegers.size() << " elementy";
	
	return 0;
}
