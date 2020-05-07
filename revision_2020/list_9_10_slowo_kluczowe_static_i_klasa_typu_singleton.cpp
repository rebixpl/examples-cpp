#include <iostream>
#include <string.h>

using namespace std;

class President
{
private:
    // Prywatny konstruktor domyślny (jego wywołanie z zewnątrz jest zabronione).
    President(){};

    // Prywatny konstruktor kopiujący (uniemożliwia tworzenie kopii)
    President(const President &);

    // Prywatny operator przypisania (uniemożliwia przypisanie)
    const President &operator=(const President &);

    // Dane elementu składowego: imię i nazwisko prezydenta.
    string Name;

public:
    // Kontrolowane tworzenie egzemplarza.
    static President& GetInstance(){
        // Obiekty statyczne są tworzone jednokrotnie
        static President OnlyInstance;
        return OnlyInstance;
    }

    // Metody publiczne
    string GetName(){
        return Name;
    }

    void SetName(string InputName){
        Name = InputName;
    }
};

int main(int argc, const char **argv)
{
    // słowo kluczowe static i klasa typu singleton
    //#-------------------------------------------------------------------

    // Klasa typu Singleton, pozwala na istnienie tylko jednego egzemplarza

    // Użycie słowa kluczowego static względem elementu składowego danych klasy
    // gwarantuje, że dany element będzie współdzielony przez wszystkie egzemplarze
    // klasy.

    // Kiedy słowo kluczowe static jest używane w zmiennej lokalnej zadeklarowanej
    // w zakresie funkcji, gwarantuje, że dana zmienna zachowa swoją wartość pomiędzy
    // kolejnymi wywołaniami funkcji.

    // Z kolei użycie słowa kluczowego static względem elementu składowego
    // funkcji — metody — powoduje, że dana metoda będzie współdzielona przez
    // wszystkie egzemplarze klasy.

    President& OnlyPresident = President::GetInstance();
    OnlyPresident.SetName("Abraham Lincoln");

    // Usuń znaki komentarza na początku poniższych wierszy, aby przekonać się o niepowodzeniu kompilacji.
    // President Second; // Nie można uzyskać dostępu do konstruktora
    // President* Third= new President(); // Nie można uzyskać dostępu do konstruktora
    // President Fourth = OnlyPresident; // Nie można uzyskać dostępu do konstruktora kopiującego
    // OnlyPresident = President::GetInstance(); // Nie można uzyskać dostępu do operatora =.
    
    cout << "Imię i nazwisko prezydenta: ";
    cout << President::GetInstance().GetName() << endl;

    // OUTPUT:
    // Imię i nazwisko prezydenta: Abraham Lincoln

    return 0;
}