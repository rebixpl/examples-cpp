#include <iostream>

using namespace std;

int main(int argc, const char **argv)
{
    // Użycie operatora new(nothrow), który zwraca wartość null, gdy alokacja zakończy się niepowodzeniem
    int* pAge = new(nothrow) int [0x1fffffff];

    if(pAge){
        // uźcie zaalokowanej pamięci
        delete[] pAge;
    }
    else
    {
        cout << "Alokacja pamięci zakończona niepowodzeniem. Zamknięcie programu" << endl;
    }
    
    return 0;
}
