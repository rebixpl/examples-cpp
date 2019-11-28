#include <iostream>
#include <string>

using namespace std;

// Klasa President typu SINGLETON
// klasa typu Singleton, używa prywatnych konstruktorów, prywatnego operatora
// przypisania oraz statycznego (static) egzemplarza
// Klasa typu Singleton pozwala na istnienie tylko JEDNEGO egzemplarza

class President
{
private:
    string Name;

    //Prywatny konstruktor domyślny ( JEGO WYWOŁANIE Z ZEWNĄTRZ JEST ZABRONIONE )
    President() {};

    //Prywantny konstruktor kopiujący ( UNIEMOŻLIWIA TWORZENIE KOPII )
    President(const President&);

    //Prywatny operator przypisania( UNIEMOŻLIWIA PRZYPISANIE )
    const President& operator=(const President&);

public:
    //Kontrolowane tworzenie egzemplarza
    static President& getInstance()
    {
        //Obiekty statyczne są tworzone jednokrotnie
        static President OnlyInstance;

        return OnlyInstance;
    }

    //Metody publiczne
    string getName()
    {
        return Name;
    }

    void setName(string nName)
    {
        this->Name = nName;
    }
};

int main()
{
    President& OnlyPresident = President::getInstance();
    OnlyPresident.setName("Abraham Lincoln");
    
    //President Second; // Nie można uzyskać dostępu do konstruktora.
    //President* Third = new President(); // Nie można uzyskać dostępu do konstruktora.
    //President Fourth = OnlyPresident; // Nie można uzyskać dostępu do konstruktora kopiującego
    //OnlyPresident = President::getInstance(); //Nie można uzyskać dostępu do konstruktora

    cout << "Imie i nazwisko: " << President::getInstance().getName() << "\n";
    return 0;
}
