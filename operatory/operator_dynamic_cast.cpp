//! Uzycie operatora rzutowania 'dynamic_cast'
//*    to rzutowanie w przeciwieństwie do rzutowania statycznego zachodzi
//*     w trakcie działania aplikacji
//*      taki mechanizm nazywa sie Runtime Type Identification (RTTI)

//      SYNTAX
//      typ_docelowy*   pDest   =   dynamic_cast<typ_klasy*>(pSource)
//      if (pDest)  // Sprawdzenie czy operacja rzutowania zakończyła się sukcesem
//              pDest->CallFunc();

#include <iostream>
using namespace std;

class Fish {
public:
    virtual void Swim(){
        cout << "Ryba plywa w wodzie!" << "\n";
    }

    // Klasa bazowa zawsze powinna zawierać wirtualny destruktor
    virtual ~Fish() {}
};

class Tuna: public Fish {
public:
    void Swim(){
        cout << "Tunczyk plywa naprawde szybko w morzu!" << "\n";
    }

    void BecomeDinner(){
        cout << "Dzisiaj na kolacje bedzie sushi z tunczyka" << "\n";
    }
};

class Carp: public Fish{
public:
    void Swim(){
        cout << "Karp plywa naprawde wolno w jeziorze!" << "\n";
    }

    void Talk(){
        cout << "Karpie nie maja glosu!" << "\n";
    }
};

void DetectFishType(Fish* inputFish){
    Tuna* pIsTuna = dynamic_cast<Tuna*>(inputFish);
    if (pIsTuna){
        cout << "Wykryto tunczyka. Tunczyk bedzie na kolacje: " << "\n";
        pIsTuna->BecomeDinner(); // Wywolanie metody Tuna::BecomeDinner
    }

    Carp* pIsCarp = dynamic_cast<Carp*>(inputFish);
    if(pIsCarp){
        cout << "Wykryto karpia. Karp bedzie na kolcje: " << "\n";
        pIsCarp->Talk(); // Wywolanie metody Carp::Talk
    }

    cout << "Sprawdzenie typu przy uzyciu metody wirtualnej Fish::Swim: " << "\n";
    inputFish->Swim(); // Wywolanie metody wirtualnej Swim
}

int main(){
    Carp myLunch;
    Tuna myDinner;

    DetectFishType(&myDinner);
    cout << "\n";
    DetectFishType(&myLunch);

    return 0;
}
