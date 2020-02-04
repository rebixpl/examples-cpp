// Odwracanie zawartości ciagu tekstowego string STL

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string strSample("tekst do odwrocenia");
	cout << "Początkowa postać przykładowego ciągu tekstowego: " << "\n";
	cout << strSample << "\n"  << "\n";
	
	reverse(strSample.begin(), strSample.end());
	
	cout << "Po zastosowaniu algorytmu std::reverse: " << "\n";
	cout << strSample << "\n";
	
	return 0;
}
