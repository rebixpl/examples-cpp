//! Użycie dyrektywy #define do definiowania funkcji
//*     funkcje makro są wykorzystywane często do prostych obliczeń
//*     to zwiększa wydajność kodu w niektórych sytuacjiach

#include <iostream>
#include <string>

#define SQUARE(x) ((x) * (x))
#define PI 3.1416
#define AREA_CIRCLE(r) (PI * (r) * (r))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))

int main(){
    std::cout << "Podaj liczbe calkowita: ";
    int input1 = 0;
    std::cin >> input1;

    std::cout << "KWADRAT(" << input1 << ") = " << SQUARE(input1) << "/n";
    std::cout << "Pole okręgu o promieniu " << input1 << " wynosi: ";
    std::cout << AREA_CIRCLE(input1) << "\n";

    std::cout << "Podaj inną liczbę całkowitą: ";
    int input2 = 0;
    std::cin >> input2;

    std::cout << "MIN(" << input1 << "," << input2 << ") = ";
    std::cout << MIN(input1, input2)  <<"\n";

    std::cout <<"MAX(" << input1 << ", " << input2 << ") = ";
    std::cout << MAX (input1, input2) << "\n";

    return 0;
}
