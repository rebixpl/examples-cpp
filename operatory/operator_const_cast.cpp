//! Uzycie operatora rzutowania 'const_cast'
//*   pozwal na wyłączenie modyfikatora dostępu const
//*     działa również ze wskaźnikami * 

#include <iostream>
using namespace std;

class SomeClass{
public:
    void DisplayMembers (){
        cout << "cipa" << "\n";
    }; // To powinien być element składowy wraz ze słowem 'const'
};

void DisplayAllData (const SomeClass& mData){
    //mData.DisplayMembers(); // ERROR: wywołanie elementu składowego innego niż const przy użyciu odniesienia const!
    SomeClass& refData = const_cast<SomeClass&>(mData);
    refData.DisplayMembers(); // IT WORKED!!!
}

int main(){
    SomeClass test;
    DisplayAllData(test);
    return 0;
}
