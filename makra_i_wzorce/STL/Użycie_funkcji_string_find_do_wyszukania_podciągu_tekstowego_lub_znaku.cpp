// Użycie funkcji string::find do wyszukania podciągu tekstowego lub znaku

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strSample ("dzień dobry ciągu tekstowy! mamy dzisiaj piękny dzień");
	cout << "przykladowy ciag tekstowy to: ";
	cout << strSample << "\n" << "\n";
	
	// Wyszukiwanie podciągu tekstowego "dzień" w tym ciągu tekstowym…
	size_t charPos = strSample.find("dzień", 0);
	
	// Sprawdzenie, czy podciąg tekstowy został znaleziony…
	if (charPos != string::npos){
		cout << "pierwsze wystapienie slowa \"dzień\" zostało znalezione w położeniu: " << charPos;
	} else {
		cout << "nie znaleziono podciagu tekstowego" << "\n";
	}
	
	cout << "\n" << "\n";
	
	cout << "Zlokalizowanie wszystkich wystąpień ciągu tekstowego \"dzień\"" << "\n";
	size_t SubstringPos = strSample.find("dzień", 0);
	while (SubstringPos != string::npos){
		cout << "słowo \"dzień\" znalezione w położeniu " << SubstringPos << "\n";
		// Funkcja 'find' wyszukuje dalej, począwszy od kolejnego znaku.
		size_t nSearchPosition = SubstringPos + 1;
		SubstringPos = strSample.find("dzień", nSearchPosition);
	}
	
	cout << "\n";
	
	cout << "Zlokalizowanie wszystkich wystąpień znaku 'a'" << "\n";
	const char charToSearch = 'a';
	charPos = strSample.find(charToSearch, 0);
	
	while (charPos != string::npos){
		cout << "'" << charToSearch << "' znaleziono";           cout << " w położeniu " << charPos << "\n";
		
		// Funkcja 'find' wyszukuje dalej, począwszy od kolejnego znaku.
		size_t charSearchPos = charPos + 1;
		charPos = strSample.find(charToSearch, charSearchPos);
	}
	
	return 0;
}
