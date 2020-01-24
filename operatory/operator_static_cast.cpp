//! Uzycie operatora rzutowania 'static_cast'
//*    Operator 'static_cast' może być używany do konwersji  wskaźników między powiązanymi 
//      typami oraz do przeprowadzenia jawnej konwersji typu dla standardowych typów danych.
//*     SKŁADNIA -> static_cast<typ_docelowy>(obiekt_do_rzutowania);

#include <iostream>

int main(){
    //? Przeprowadzenie rzutowania jawnego, które w innym przypadku pozostaje niejawne
    double dPi = 3.141592565;
    int num = static_cast<int>(dPi);
    std::cout << num << "\n"; // OUTPUT: 3



    //? Gdy użyjemy static_cast, wskaźnik można rzutować w górę do typu bazowego lub w dół do typu pochodnego
    Base* pBase = new Derived(); // Zbudowanie obiektu derived
    Derived* pDerived = static_cast<Derived*>(pBase); // OK

    //Obiekt CUnrelated nie jest powiązany z Base przez zadną hierarchię dziedziczenia
    CUnrelated* pUnrelated = static_cast<CUnrelated*>(pBase); // ERROR -> takie rzutowanie nie jest dozwolone, ponieważ oba typy nie są ze sobą w żaden sposób powiązane
    
    return 0;
}
