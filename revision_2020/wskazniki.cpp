#include <iostream>

using namespace std;

int main(int argc, const char **argv)
{
    // DEKLARACJA WSKAŹNIKA
    // typWskaźnika * nazwazmiennejwskaźnika;
    // typWskaźnika * nazwazmiennejwskaźnika = NULL;
    int *pInteger = NULL;

    // Jeżeli VarName to nazwa zmiennej, wtedy &VarName podaje adres w pamięci,
    // gdzie przechowywana jest wartość wymienionej zmiennej.
    int Age = 30;
    cout << "Liczba całkowita Age jest pod adresem: 0x" << hex << &Age << endl;
    // OUTPUT: 0x0x61ff04

    // Przykład deklaracji i inicjalizacji wskaźnika
    int Age2 = 30;
    int *pInteger2 = &Age2; // Wskaźnik typu int, zainicjalizowany z wartością &Age.
    cout << "Liczba całkowita Age2 jest pod adresem: 0x" << hex << pInteger2 << endl;
    // OUTPUT: 0x0x61ff00
    
    cout << "wartość Age2 (*pInteger2) -> " << dec << *pInteger2 << endl;
    // OUTPUT: 30
    return 0;
}