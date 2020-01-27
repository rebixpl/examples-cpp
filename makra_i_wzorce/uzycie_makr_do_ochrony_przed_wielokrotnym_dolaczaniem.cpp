//! Uzycie dyrektywy makr do ochrony przed wielokrotnym dołączaniem
//*     używa się ich w plikach nagłówkowych .h w których dołączamy inne pliki nagłówkowe



//? Użycie w praktyce
#ifndef HEADER1_H_// Ochrona przed wielokrotnym dolaczaniem
#define HEADER1_H_ // ten i ponizsze wiersze preprocesor odczyta jednokrotnie
#include <header2.h>

class Class1{
    //elementy składowe
};

#endif // Koniec pliku header1.h
