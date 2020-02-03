// uzyskanie dostępu do obiektu string i jego zawartości przy pomocy operatora indeksowania i iteratory

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strSTLString ("ciag tekstowy");
	
	cout << "Wyświetlenie znaków przy użyciu składni tablicy: " << "\n";
	for (size_t nCharCounter = 0; nCharCounter < strSTLString.length(); ++nCharCounter) {
		cout << "Znak [" << nCharCounter << "] to: ";
		cout << strSTLString[nCharCounter] << "\n";
	}
	
	cout << "/n";
	
	//Dostęp do zawartości ciągu tekstowego za pomoca iteratorow.
	cout << "Wyświetlenie znaków przy użyciu iteratorów: " << endl;
	int charOffset = 0;
	
	string::const_iterator iCharacterLocator;
	for (iCharacterLocator = strSTLString.begin(); iCharacterLocator != strSTLString.end(); ++iCharacterLocator){
		cout << "znak [" << charOffset++ << "] to: ";
		cout << *iCharacterLocator << "\n";
	}
	cout << "\n";
	
	// Dostęp do zawartości ciągu tekstowego jak do ciągu tekstowego w stylu języka C.
	cout << "Reprezentacja char* ciągu tekstowego to: ";
	cout << strSTLString.c_str() << "\n";
	
}
