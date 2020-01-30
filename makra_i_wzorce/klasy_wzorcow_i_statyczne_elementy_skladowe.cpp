//! klasy wzorców i statyczne elementy składowe
//*     w klasie wzorców, statyczny element składowy klasy pozostaje współdzielony przez wszystkie egzemplarze klasy wzorców o tej samej specjalizacji
//*     Składnia inicjalizacji statycznego elementu składowego
//*     template<parametry wzorca> TypStatyczny NazwaKlasy<Argumenty wzorca>::ZmiennaStatyczna;

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class TestStatic{
public:
    static int StaticValue;
};

// Inicjalizacja statycznego elementu składowego
template<typename T> int TestStatic<T>::StaticValue;

int main(){
    TestStatic <int> Int_Year;
    cout << "Ustawienie StaticValue dla Int_Year jako 2011" << "\n";
    Int_Year.StaticValue = 2011;
    TestStatic<int> Int_2;

    TestStatic<double> Double_1;
    TestStatic<double> Double_2;
    cout << "Ustawienie StaticValue dla Double_2 jako 1011" << "\n";
    Double_2.StaticValue = 1011;

    cout << "Int_2.StaticValue = " << Int_2.StaticValue << "\n"; // OUTPUT: 2011
    cout << "Double_1.StaticValue = " << Double_1.StaticValue << "\n"; // OUTPUT: 1011

    return 0;
}
