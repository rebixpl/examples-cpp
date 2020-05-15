#include <iostream>
#include <string.h>

using namespace std;

//Struktura
struct Human
{
    // Konstruktor, domyślnie jest publiczny (ponieważ nie podano żadnych specyfikatorów dostępu)
    Human(const MyString& InputName, int InputAge, bool InputGender)
        : Name(InputName), Age(InputAge), Gender(InputGender) {}

    int GetAge()
    {
        return Age;
    }

    private:
        int Age;
        bool Gender;
        MyString Name;
};

int main(int argc, const char **argv)
{
    // struktury

    Human FirstMan("Adam", 25, true); // To jest egzemplarz struktury Human.

    return 0;
}