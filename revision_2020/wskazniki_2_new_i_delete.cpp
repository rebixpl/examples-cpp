#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, const char **argv)
{
    // użycie operatorów new i delete
    //? Typ* Wskaźnik = new Typ; // Żądanie pamięci dla jednego elementu.
    //? delete Wskaźnik; Zwolnienie pamięci zaalokowanej wcześniej dla jednego egzemplarza wskazanego typu.
    
    //? Typ* Wskaźnik = new Typ[liczbaElementów]; // Żądanie pamięciu dla podanej liczby elementów
    //? delete[] Wskaźnik; // Zwolnienie zaalokowanego powyżej bloku pamięci.

    

    //!---------------------------------------------
    // Żądanie alokacji pamięci dla elementu typu short int.
    short int* pAge = new short int;

    cout << "Podaj wiek psa: ";
    cin >> *pAge;

    cout << "Wiek psa wynosi: " << *pAge;
    cout << "\n" << "Wartosć zmiennej pAge jest perzchowywana poda adresem 0x" << hex << pAge << "\n";

    // Zwolnienie pamięci
    delete pAge;
    
    // OUTPUT: 
    // Wiek psa wynosi: 69
    // Wartosc zmiennej pAge jest perzchowywana poda adresem 0x0x7916c0


    //!---------------------------------------------
    string Name;
    cout << "Podaj imie: ";
    cin >> Name;

    // Dodanie 1 do rezerwowanej pamięci (na znak null).
    int CharsToAllocate = Name.length() + 1;

    // Żądanie pamięci potrzebnej do przechowywania kopii danych wejściowych.
    char* CopyOfName = new char[CharsToAllocate];

    // Funkcja strcpy() kopiuje dane z ciągu tekstowego zakończonego znakiem null.
    strcpy(CopyOfName, Name.c_str());

    // Wyświetlenie skopiowanego ciągu tekstowego
    cout << "Skopiowany bufor zawiera: " << CopyOfName << "\n";

    // Usuwanie bufora
    delete[] CopyOfName;
    
    return 0;
}