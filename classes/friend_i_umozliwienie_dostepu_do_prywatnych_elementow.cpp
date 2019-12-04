#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    string Name;
    int Age;

    //Deklaracja przyjaciela informuje kompilator, że funkcja DisplayAge oraz klasa Utility
    //ma specjalne uprawnienia dostępu do prywatnych elementów składowych
    friend void DisplayAge(const Human& inputClass);
    friend class Utility;

public:
    Human(string inputName, int inputAge)
    {
        this->Name = inputName;
        this->Age = inputAge;
    }
};

class Utility
{
public:
    static void DisplayAge(const Human& inputClass)
    {
        cout << inputClass.Age << "\n";
    }
};

void DisplayAge(const Human& inputClass)
{
    cout << inputClass.Age << "\n";
}

int main()
{
    Human FirstMan("Adam", 21);

    cout << "Uzyskanie dostepu do prywatnego elementu skladowego Age przy uzyciu slowa kluczowego friend: ";
    DisplayAge(FirstMan);

    cout << "\n" << "Uzyskanie dostepu do prywatnego elementu skladowego Age przy uzyciu friend class: ";
    Utility::DisplayAge(FirstMan);

    return 0;
}
