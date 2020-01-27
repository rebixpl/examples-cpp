//! Użycie makra 'assert' do sprawdzania wyrażeń
//*     sprawdza wyrażenie i wartość zmiennych
//*     działa tylko w trybie debug

#include <iostream>
#include <assert.h> // aby używać makra assert należy wczytać plik nagłówkowy 'assert.h'

int main(){
    char* sayHello = new char [25];
    assert(sayHello != NULL); // wyświetlenie komunikatu, jeśli wskaźnik ma wartość null

    //inny kod

    delete [] sayHello;
    return 0;
}
