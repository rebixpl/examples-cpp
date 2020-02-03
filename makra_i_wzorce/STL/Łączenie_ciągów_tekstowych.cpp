// łączenie ciągów tekstowych

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strSample1("Hello ");
	string strSample2(" world!");
	
	// łączenie ciągów tekstowych 
	// przy uzyciu +=
	strSample1 += strSample2;
	cout << strSample1 << "\n" << "\n";
	
	// przy uzyciu metody append()
	// string1.append(string2)
	string strSample3(" dobrze ze nie trzeba uzywac ");
	strSample1.append(strSample3);
	cout << strSample1 << "\n" << "\n";
	
	const char* constCStyleString = "wskaznikow.";
	strSample1.append(constCStyleString);
	cout << strSample1 << "\n";
	
}
