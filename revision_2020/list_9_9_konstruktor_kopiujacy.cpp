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
        cout << "Konstruktor: tworzenie nowego egzemplarza MyString" << endl;
        if (InitialInput != NULL)
        {
            Buffer = new char[strlen(InitialInput) + 1];
            strcpy(Buffer, InitialInput);

            // Wyświetlenie adresu w pamięci wskazywanego przez bufor lokalny
            cout << "Bufor wskazuje adres 0x" << hex;
            cout << (unsigned int *)Buffer << endl;
        }
        else
        {
            Buffer = NULL;
        }
    }

    // Konstruktor kopiujący
    MyString(const MyString &CopySource)
    {
        cout << "Konstruktor kopiujący: kopiowanie z egzemplarza MyString" << endl;
        if (CopySource.Buffer != NULL)
        {
            // Zapewnienie utworzenia pełnej kopii, w pierwszej kolejności następuje alokacja własnego bufora.
            Buffer = new char[strlen(CopySource.Buffer) + 1];
            // Kopiowanie ze źródła do bufora lokalnego
            strcpy(Buffer, CopySource.Buffer);

            // Wyświetlenie adresu w pamięci wskazywanego przez bufor lokalny.
            cout << "Bufor wskazuje adres 0x:" << hex;
            cout << (unsigned int *)Buffer << endl;
        }
        else
        {
            Buffer = NULL;
        }
    }

    // Destruktor
    ~MyString()
    {
        cout << "Wywołanie destruktora i wyczyszczenie bufora" << endl;
        if (Buffer != NULL)
            delete[] Buffer;
    }

    int GetLength()
    {
        return strlen(Buffer);
    }

    const char *GetString()
    {
        return Buffer;
    }
};

void UseMyString(MyString Input)
{
    cout << "Bufor w klasie MyString zawiera " << Input.GetLength();
    cout << " znaków" << endl;

    cout << "Bufor zawiera: " << Input.GetString() << endl;
    return;
}

int main(int argc, const char **argv)
{
    // Konstruktor kopiujący

    MyString SayHello("Hello from class String");

    // Przekazanie obiektu SayHello przez wartość (zostanie utworzona kopia).
    UseMyString(SayHello);

    /* OUTPUT:
    Konstruktor: tworzenie nowego egzemplarza MyString
    Bufor wskazuje adres 0x0x6719e0
    Konstruktor kopiujący: kopiowanie z egzemplarza MyString
    Bufor wskazuje adres 0x:0x671a00
    Bufor w klasie MyString zawiera 17 znaków
    Bufor zawiera: Hello from class String
    Wywołanie destruktora i wyczyszczenie bufora
    Wywołanie destruktora i wyczyszczenie bufora
    */

    return 0;
}
