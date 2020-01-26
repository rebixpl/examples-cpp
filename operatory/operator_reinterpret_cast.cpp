//! Uzycie operatora rzutowania 'reinterpret_cast'
//*    ten operator pozwla na rzutowanie jednego typu obiektu do innego,
//*     niezależnie od tego, czy są one ze sobą powiązane

#include <iostream>
using namespace std;

int main(){
    //? Użycie reinterpret_cast
    Base* pBase = new Base();
    CUnrelated* pUnrelated = reinterpret_cast<CUnrelated*>(pBase);
    // Wprawdzie powyższy kod się kompiluje, ale nie jest dobrą praktyką programistyczną!
    
    return 0;
}
