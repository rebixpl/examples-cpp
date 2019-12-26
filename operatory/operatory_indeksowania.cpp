#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class MyString
{
private:
    char* Buffer;

    // Domyślny konstruktor prywatny
    MyString() {}

public:
    // Konstruktor
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

    // Konstruktor kopiujący listing 9.9
    MyString(const MyString& copySource)
    {
         cout << "Konstruktor kopiujacy: kopiowanie z egzemplarza MyString" << "\n";

        if(copySource.Buffer != NULL)
        {
            Buffer = new char[strlen(copySource.Buffer) + 1];
            strcpy(Buffer, copySource.Buffer);
        }
        else
            Buffer = NULL;
    }

    // Kopiujacy operator przypisania listing 12.9
    MyString& operator= (const MyString& copySource)
    {
        if((this != &copySource) && (copySource.Buffer != NULL))
        {
            if(Buffer != NULL)
                delete[] Buffer;

            // Zapewnienie utworzenia glekiej kopii przez alokacjê wlasnego bufora
            // w pierwszej kolejnosci
            Buffer = new char[strlen(copySource.Buffer) + 1];

            // Operacja kopiowania zrodla do bufora lokalnego
            strcpy(Buffer, copySource.Buffer);
        }
        return *this;
    }

    // Operator indeksowania
    const char& operator[] (int Index) const
    {
        if(Index < this->GetLength())
            return Buffer[Index];
    }

    // Destruktor
    ~MyString()
    {
        if(Buffer != NULL)
            delete[] Buffer;
    }

    int GetLength() const
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
    cout << "Podaj zdanie: ";
    string strInput;
    getline(cin, strInput);

    MyString youSaid(strInput.c_str());

    cout << "Uzycie operatora [] do wyswietlenia danych wejsciowych: " << "\n";
    for(int Index = 0; Index < youSaid.GetLength(); ++Index)
        cout << youSaid[Index] << " ";
    cout << "\n";

    cout << "Podaj indeks z zakresu 0 - " << youSaid.GetLength() - 1 << ": ";
    int InIndex = 0;
    cin >> InIndex;
    cout << "Znak danych wejsciowych w polozeniu liczonym od zera: " << InIndex;
    cout << " to: " << youSaid[InIndex] << "\n";

    return 0;
}
