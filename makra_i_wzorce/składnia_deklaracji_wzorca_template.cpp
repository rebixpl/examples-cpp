//! składnia deklaracj wzorca 'template'
//*     Wzorce w C++ pozwalają na zdefiniowanie zachowania, które 
//*     następnie będzie stosowane względem obiektów różneg typu.

//*     wzorce zapewniają bezpieczeństwo typów , a np. makra nie

//*     składnia deklaracji wzorca:
//*     template <lista parametrów>
//*     template funkcja | deklaracja klasy



//? Przykładowa deklaracja wzorca poniżej:
/*
//Funkcja wzorca
template <typename T1, typename T2 = T1>
bool TemplateFunction(const T1& param1, const T2& param2);

//Klasa wzorca
template <typename T1, typename T2 = T1>
class Template{
private:
    T1 m_Obj1;
    T2 m_Obj2;

public:
    T1 GetObj1() {return m_Obj1;}
    //inne elementy składowe
}
*/

#include <iostream>

int main(){
    

    return 0;
}
