
//! Uzycie dyrektywy #define
//*     SYNTAX:
//*     #define identyfikator wartość

#include <iostream>
#include <string>

#define ARRAY_LENGTH 25
#define PI 3.1416
#define FAV_WHISKY "Jack Daniels"
#define MY_DOUBLE double
using namespace std;

int main(){
    //*     Dyrektywa define po prostu za każdym razem kiedy napotka identyfikator 
    //*      zamienia go na wartość
    int myNumbers [ARRAY_LENGTH] = {0};
    double Radiuses [ARRAY_LENGTH] = {0.0};
    string Names [ARRAY_LENGTH];

    for (int Index = 0; Index < ARRAY_LENGTH; Index++){
        myNumbers[Index] = Index;
        cout << myNumbers[Index] << "\n";
    }

    MY_DOUBLE radius = 32.5234;
    cout << radius << "\n";

    string FavouriteWhisky(FAV_WHISKY);
    cout << "Moj ulubiony drink to: " << FAV_WHISKY << "\n";

    return 0;
}
