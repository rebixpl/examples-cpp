// Konwersja wielkości znaków obiektu string STL

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cout << "Proszę podać ciąg tekstowy, w którym nastąpi konwersja wielkości znaków: " << "\n";
	cout << "> ";
	
	string strInput;
	getline(cin, strInput);
	cout << "\n";
	
	transform(strInput.begin(), strInput.end(), strInput.begin(), toupper);
	cout << "Ciąg tekstowy, w którym znaki skonwertowano na wielkie: " << "\n";
	cout << strInput << "\n" << "\n";
	
	transform(strInput.begin(), strInput.end(), strInput.begin(), tolower);
	cout << "Ciąg tekstowy, w którym znaki skonwertowano na małe: " << "\n";
	cout << strInput << "\n";
	
	return 0;
}
