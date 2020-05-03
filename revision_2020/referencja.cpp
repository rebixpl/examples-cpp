#include <iostream>

using namespace std;

int main(int argc, const char **argv)
{
    // Referencje
    int Original = 30;
    cout << "Zmienna Original = " << Original << endl;
    cout << "Zmienna Original jest pod adresem: " << hex << &Original << endl;

    int& Ref = Original;
    cout << "Ref jest pod adresem: " << hex << &Ref << "\n";

    int& Ref2 = Ref;
    cout << "Ref2 jest pod adresem: " << hex << &Ref2 << endl;
    cout << "Ref2 pobiera wartość, Ref2 = " << dec << Ref2 << endl;
    
    return 0;
}
