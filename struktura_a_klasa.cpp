#include <iostream>

using namespace std;

struct Human
{
    //Konstruktor w strukturze, domyślnie jest publiczny (ponieważ nie podano żadnych specyfikatorów
    //dostępu). W klasie taki konstruktor byłby zadeklarowany jako prywatny
    //to jest generalna różnica pomiędzy klasą a strukturą
    Human(const MyString& inputName, int inputAge, bool inputGender)
        :Name(inputName), Age(inputAge), Gender(inputGender) {}

    int GetAge ()
    {
        return Age;
    }

private:
    int Age;
    bool Gender;
    MyString Name;
};

int main()
{
    Human FirstMAn("Adam", 26, true); // To jest egzemplarz struktury HUMAN

    return 0;
}
