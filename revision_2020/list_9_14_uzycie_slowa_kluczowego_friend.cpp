#include <iostream>
#include <string.h>

using namespace std;

class Human
{
    private:
        string Name;
        int Age;

        // Friend Class
        friend class Utility;

    public:
        Human(string InputName, int InputAge){
            this->Name = InputName;
            this->Age = InputAge;
        }
};

class Utility
{
    public:
        static void DisplayAge(const Human& Person){
            cout << Person.Age << "\n";
        }
};

int main(int argc, const char **argv)
{
    // użycie słowa kluczowego friend

    Human FirstMan("Adam", 25);

    cout << " Uzyskanie dostępu do prywatnego elementu składowego Age przy użyciu friend class: ";

    Utility::DisplayAge(FirstMan); // OUTPUT: 25
    
    return 0;
}