#include <iostream>
using namespace std;

class MyString
{
private:
	char* Buffer;

public:
	// Konstruktor
	MyString(const char* InitialInput)
	{
		if (InitialInput != NULL)
		{
			Buffer = new char[strlen(InitialInput) + 1];
			strcpy(Buffer, InitialInput);
		}
		else
			Buffer = NULL;
	}

	// konstruktor kopiujący z listingu 9.9.
	MyString(const MyString& CopySource)
	{
		if (CopySource.Buffer != NULL)
		{
			// Zapewnienie utworzenia pełnej kopii, w pierwszej kolejności następuje alokacja własnego bufora.
			Buffer = new char[strlen(CopySource.Buffer) + 1];
			strcpy(Buffer, CopySource.Buffer);
		}
		else
			Buffer = NULL;
	}

	// Kopiujący operator przypisania.
	MyString& operator= (const MyString& CopySource)
	{
		if ((this != &CopySource) && (CopySource.Buffer != NULL))
		{
			if (Buffer != NULL)
				delete[] Buffer;

			// Zapewnienie utworzenia głębokiej kopii przez alokację własnego bufora w pierwszej kolejności
			Buffer = new char[strlen(CopySource.Buffer) + 1];

			// Operacja kopiowania źródła do bufora lokalnego.
			strcpy(Buffer, CopySource.Buffer);
		}
		return *this;
	}

	// Destruktor
	~MyString()
	{
		if (Buffer != NULL)
			delete[] Buffer;
	}

	int GetLength() 
	{
		return strlen(Buffer);
	}

	operator const char*()
	{
		return Buffer;
	}
};

int main() {
	// Wyposażona w kopiujący operator przypisania lepsza wersja klasy MyString z listingu 9.9

	MyString String1("Witaj, ");
	MyString String2("Chuju!");

	cout << "Przed przypisaniem: " << endl;
	cout << String1 << String2 << endl; // OUTPUT: 
	String2 = String1;
	cout << "Po przypisaniu String2 = String1: " << endl;
	cout << String1 << String2 << endl; // OUTPUT: 

	return 0;
}