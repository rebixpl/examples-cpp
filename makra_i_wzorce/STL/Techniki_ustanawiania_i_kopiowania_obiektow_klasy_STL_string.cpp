//!  Techniki ustanawiania i kopiowania obiektów klasy STL string


#include <iostream>
#include <string>
using namespace std;

int main(){
	const char* constCStyleString = "vxffffcfggtygggh";
	cout << "Stala viagu tekstowego ma wartosc: " << constCStyleString << "\n";
	
	std::string strFromConst (constCStyleString); //konstruktor
	cout << "strFromConst: " << strFromConst << "\n";
	
	std::string str2("witaj swiecie");
	std::string str2copy(str2);
	cout << "str2copy: " << str2copy << "\n";
	
	// Inicjalizacja ciągu tekstowego z pięcioma pierwszymi znakami innego.
	std::string strPartialCopy (constCStyleString, 5);
	cout << "strPartialCopy: " << strPartialCopy <<"\n";
	
	// Inicjalizacja obiektu string wraz z dziesięcioma znakami 'a'.
	std::string strRepeatChars (10, 'a');
	cout << "strReapeatChars: " << strRepeatChars << "\n";
	
	return 0;
}
