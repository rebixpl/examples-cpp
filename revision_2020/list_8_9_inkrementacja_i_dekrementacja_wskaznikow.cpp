#include <iostream>

using namespace std;

int main(int argc, const char **argv)
{
    //! Co się stanie po inkrementacji lub dekrementacji wskaźnika?
    // Adres znajdujący się we wskaźniku jest inkrementowany lub dekrementowany
    // o wartość zwrotną działania operatora sizeof względem typu danych
    // wskazywanego przez wskaźnik (to niekoniecznie będzie bajt). Dzięki temu
    // kompilator gwarantuje, że wskaźnik nigdy nie będzie prowadzić do środka lub
    // na koniec danych umieszczonych pod danym adresem w pamięci — wskaźnik
    // zawsze prowadzi na początek danych.
    //? Jeżeli wskaźnik zostałby zadeklarowany w postaci:
    //? Typ* pTyp = Adres;
    //? wówczas ++pTyp oznacza, że pTyp zawiera (a więc wskazuje) wartość Adres +
    //? sizeof(Typ).


    //!------------------------------------------------
    cout << "Ile liczb calkowitych chcesz podac? ";
    int inputNums = 0;
    cin>>inputNums;

    // Alokacja żądanych liczb całkowitych
    int* pNumbers = new int[inputNums];
    int* pCopy = pNumbers;

    cout<<"Udalo sie zaalokowac pamiec dla "<< inputNums<< " liczb całkowitych"<<endl;

    for (int Index = 0; Index < inputNums; Index++){
        cout << "Podaj liczbe: ";
        cin >> *(pNumbers + Index);
    }

    cout << "Wyswietlenie wszystkich podanych liczb: " << endl;
    for (int i=0;i<inputNums;i++){
        cout<< *(pCopy++) << " ";
    }
    cout << "\n";

    // Zwalnianie pamięci
    delete[] pNumbers;

    return 0;
}
