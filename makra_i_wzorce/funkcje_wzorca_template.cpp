//! funkcje wozrca 'template'
//*     

#include <iostream>
#include <string>
using namespace std;

template <typename Type>
const Type& GetMax (const Type& value1, const Type& value2){
    if(value1 > value2)
        return value1;
    else
        return value2;
}

template <typename Type>
void DisplayComprasion(const Type& value1, const Type& value2){
    cout << "GetMax(" << value1 << ", " << value2 << ") = ";
    cout << GetMax(value1, value2) << "\n";
}

int main(){
    int Int1 = -101, Int2 = 2020;
    DisplayComprasion(Int1, Int2);
    // DisplayComprasion<int>(Int1, Int2); // wzorce moża wywoływać z wyraźnie podanym typem jedank w tym przypadku nie jest to potrzebne

    double d1 = 3.14, d2= 3.1416;
    DisplayComprasion(d1, d2);

    string Name1("Jack"), Name2("John");
    DisplayComprasion(Name1, Name2);

    return 0;
}
