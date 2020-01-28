//! deklarowanie wzorców z wieloma parametrami
//*     

#include <iostream>
#include <string>
using namespace std;

//? wyświetla klasę wzorca z dwoma parametrami wzorca:
template <typename T1, typename T2>
class HoldsPair{
private:
    T1 Value1;
    T2 Value2;
public:
   // Konstruktor inicjalizujący zmienne składowe 
    HoldsPair(const T1& value1, const T2& value2){
        Value1 = value1;
        Value2 = value2;
    };
    // Deklaracja pozostalych funkcji
};

int main(){
    //?  ustanowienie wzorca, który paruje typ int z typem double
    HoldsPair <int, double> pairIntDouble (6, 1.99);



    //? ustanowienie wzorca, który paruje typ int z typem int
    HoldsPair <int, int> pairIntInt (6, 500);

    return 0;
}
