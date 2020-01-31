//! wyszukanie elementu i jego pozycji w kontenerze vector
//*     


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    // Tablica dynamiczna liczb całkowitych
    vector <int> vecIntegerArray;

    // Umieszczenie w tablicy przykładowych liczb całkowitych
    vecIntegerArray.push_back(50);
    vecIntegerArray.push_back(2991);
    vecIntegerArray.push_back(23);
    vecIntegerArray.push_back(9999);

    cout << "Zawartosc kontenera vector jest nastepujaca: " << "\n";

    // Przejscie przez kontener vector i odczytanie wartości za pomocą iteratora
    vector <int>::iterator iArrayWalker = vecIntegerArray.begin();

    // Powyższa deklaracja typu iteratora może wydawać się skomplikowana. Jeżeli
    // korzystasz z kompilatora w standardzie C++11, tę deklarację możesz znacznie
    // uprościć do postaci:

    //auto iArrayWalker = vecIntegerArray.begin(); //kompilator wykrywa typ 

    while(iArrayWalker != vecIntegerArray.end()){
        // WYświetlenie wartości na ekranie
        cout << *iArrayWalker << "\n";

        // inkrementacja iteratora
        iArrayWalker++;
    }

    // Wyszukanie elementu (2991) w tablicy przy użyciu algorytmu 'find'
    vector <int>::iterator iElement = find(vecIntegerArray.begin(), vecIntegerArray.end(), 2991);

    // Sprawdzenie czy wartość została znaleziona
    if(iElement != vecIntegerArray.end()){
        // Wartość została znaleziona, określenie jej pozycji
        int Position = distance(vecIntegerArray.begin(),iElement);
        cout << "Wartosc " << *iElement;
        cout << " zostala znaleziona w kontenerze vector na pozycji: " << Position << "\n";
    }

    return 0;
}
