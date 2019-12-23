#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class MyString
{
private:
    char* Buffer;

public:
    //konstruktor
    MyString(const char* initialInput)
    {
        if(initialInput != NULL)
        {
            Buffer = new char[strlen(initialInput) + 1];
            strcpy(Buffer, initialInput);
        }
        else
            Buffer = NULL;
    }

    //Konstruktor kopiujący
    MyString(const MyString& copySource)
    {
         cout << "Konstruktor kopiujący: kopiowanie z egzemplarza MyString" << "\n";

        if(copySource.Buffer != NULL)
        {
            Buffer = new char[strlen(copySource.Buffer) + 1];
            strcpy(Buffer, copySource.Buffer);
        }
        else
            Buffer = NULL;
    }

    //Kopiujacy operator przypisania
    MyString& operator= (const MyString& copySource)
    {
        if((this != &copySource) && (copySource.Buffer != NULL))
        {
            if(Buffer != NULL)
                delete[] Buffer;

            // Zapewnienie utworzenia głębokiej kopii przez alokację własnego bufora
            // w pierwszej kolejności
            Buffer = new char[strlen(copySource.Buffer) + 1];

            //Operacja kopiowania źródła do bufora lokalnego
            strcpy(Buffer, copySource.Buffer);
        }
        return *this;
    }

    //Destruktor
    ~MyString()
    {
        if(Buffer != NULL)
            delete[] Buffer;
    }

    int getLength()
    {
        return strlen(Buffer);
    }

    operator const char*()
    {
        return Buffer;
    }
};

int main()
{
    MyString String1("Witaj, ");
    MyString String2(" swiecie!");

    cout << "Przed przypisaniem: " << "\n";
    cout << String1 << String2 << "\n";
    String2 = String1;
    cout << "Po przypisaniu String2 = String1: " << "\n";
    cout << String1 << String2 << "\n";

    return 0;
}
