#include <iostream>
#include <string.h>

using namespace std;

class MyString
{
private:
    char *Buffer;

public:
    // Konstruktor
    MyString(const char *InitialInput)
    {
        if (InitialInput != NULL)
        {
            Buffer = new char[strlen(InitialInput) + 1];
            strcpy(Buffer, InitialInput);
        }
        else
        {
            Buffer = NULL;
        }
    };

    // Konstruktor kopiujący
    MyString(const MyString &CopySource)
    {
        if (CopySource.Buffer != NULL)
        {
            Buffer = new char[strlen(CopySource.Buffer) + 1];
            strcpy(Buffer, CopySource.Buffer);
        }
        else
        {
            Buffer = NULL;
        }
    }

    ~MyString()
    {
        if (Buffer != NULL)
            delete[] Buffer;
    }

    int GetLength()
    {
        return (strlen(Buffer));
    }

    const char *GetString()
    {
        return Buffer;
    }
};

class Human
{
private:
    int Age;
    bool Gender;
    MyString Name;

public:
    Human(const MyString &InputName, int InputAge, bool InputGender)
        : Name(InputName), Age(InputAge), Gender(InputGender) {}

    int GetAge()
    {
        return this->Age;
    }
};

int main(int argc, const char **argv)
{
    // Użycie operatora sizeof względem klasy

    MyString FirstMan("Adam");
    MyString FirstWoman("Eve");

    cout << "sizeof(MyString) = " << sizeof(MyString) << "\n";
    cout << "sizeof(FirstMan) = " << sizeof(FirstMan) << "\n";
    cout << "sizeof(FirstWoman) = " << sizeof(FirstWoman) << "\n";

    Human FirstMaleHuman(FirstMan, 25, true);
    Human FirstFemaleHuman(FirstWoman, 18, false);

    cout << "sizeof(Human) = " << sizeof(Human) << "\n";
    cout << "sizeof(FirstMaleHuman) = " << sizeof(FirstMaleHuman) << "\n";
    cout << "sizeof(FirstFemaleHuman) = " << sizeof(FirstFemaleHuman) << "\n";
    

    return 0;
}