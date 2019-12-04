#include <iostream>
#include <cstring>

using namespace std;

class MyString
{
private:
    char* Buffer;

public:
    //Konstruktor
    MyString(const char* initialInput)
    {
        if(initialInput != NULL)
        {
            Buffer = new char [strlen(initialInput) + 1];
            strcpy(Buffer, initialInput);
        }
        else
            Buffer = NULL;
    }

    // Konstruktor kopiujący
    MyString(const MyString& CopySource)
    {
        if(CopySource.Buffer != NULL)
        {
            Buffer = new char [strlen(CopySource.Buffer) + 1];
            strcpy(Buffer, CopySource.Buffer);
        }
        else
            Buffer = NULL;
    }

    //Destruktor
    ~MyString()
    {
        if(Buffer != NULL)
            delete [] Buffer;
    }

    int GetLength()
    {
        return strlen(Buffer);
    }

    const char* GetString()
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
    Human(const MyString& inputName, int inputAge, bool inputGender)
        : Name(inputName), Age(inputAge), Gender(inputGender) {}

    int GetAge()
    {
        return Age;
    }
};

int main()
{
    MyString FirstMan("Adam");
    MyString FirstWoman("Eve");

    cout << "sizeof(MyString) = " << sizeof(MyString) << endl;
    cout << "sizeof(FirstMan) = " << sizeof(FirstMan) << endl;
    cout << "sizeof(FirstWoman) = " << sizeof(FirstWoman) << endl;

    Human FirstMaleHuman(FirstMan, 25, true);
    Human FirstFemaleHuman(FirstWoman, 18, false);

    cout << "sizeof(Human) = " << sizeof(Human) << endl;
    cout << "sizeof(FirstMaleHuman) = " << sizeof(FirstMaleHuman) << endl;
    cout << "sizeof(FirstFemaleHuman) = " << sizeof(FirstFemaleHuman) << endl;

    return 0;
}
