#include <iostream>

using namespace std;

int main()
{
    // Deklaracja tablicy:
    // typ-elementu nazwa-tablicy [liczba-elementów] = {opcjonalne wartości początkowe}

    int myNumbers[6] = {1, 2, 3, -4, 5, -6};
    for (int i = 0; i < 6; i++)
    {
        cout << myNumbers[i] << " ";
    } // OUTPUT: 1 2 3 -4 5 -6

    cout << "\n"
         << "\n";

    int myNumbers2[6] = {23, 55};
    for (int i = 0; i < 6; i++)
    {
        cout << myNumbers2[i] << " ";
    } // OUTPUT: 23 55 0 0 0 0

    // Zainicjalizowanie wszystkich elementów tablicy wraz z wartościami 0
    int myNumbers3[6] = {0};

    cout << "\n"
         << "\n";

    // Użycie stałej do zadeklarowania wielkości elementów tablicy
    const int ARRAY_LENGTH = 6;
    int myNumbers4[ARRAY_LENGTH] = {34, 67, 355, -445, 55};

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << myNumbers4[i] << " ";
    } // OUTPUT: 34 67 355 -445 55 0

    cout << "\n"
         << "\n";

    // bajty używane przez tablicę = sizeof(typ-elementu) * liczba elementów
    cout << "sizeof(myNumbers4) = " << sizeof(myNumbers4) << endl; // OUTPUT: 24
    cout << "\n";
    cout << "sizeof(int) * ARRAY_LENGTH = " << sizeof(int) * ARRAY_LENGTH << endl; // OUTPUT: 24

    cout << "\n"
         << "\n";

    // przypisywanie wartości elementowi tablicy
    int numberolo[2] = {0};
    for (int i = 0; i < 2; i++)
    {
        cout << numberolo[i] << " ";
    } // OUTPUT: 0,0

    // array[index] = newValue
    // nalezy pamietac aby nie używać liczby o 1 mniejsze od wielkości tablicy ( zamiast 1, 2 użyć 0, 1)
    numberolo[0] = 2050;
    numberolo[1] = 2020;

    for (int i = 0; i < 2; i++)
    {
        cout << numberolo[i] << " ";
    } // OUTPUT: 2050, 2020

    cout << "\n"
         << "\n";

    // Tablice wielowymiarowe
    // typ nazwa [wymiar1][wymiar2][...] = {{},{},{},...};
    int threeRowsThreeColumns[3][3] = {{-501, 206, 2011}, {908, 101, 206}, {303, 456, 596}};

    cout << "Rzad 0: " << threeRowsThreeColumns[0][0] << " "
         << threeRowsThreeColumns[0][1] << " "
         << threeRowsThreeColumns[0][2] << "\n";

    cout << "Rzad 1: " << threeRowsThreeColumns[1][0] << " "
         << threeRowsThreeColumns[1][1] << " "
         << threeRowsThreeColumns[1][2] << "\n";

    cout << "Rzad 2: " << threeRowsThreeColumns[2][0] << " "
         << threeRowsThreeColumns[2][1] << " "
         << threeRowsThreeColumns[2][2] << "\n";

    // OUTPUT:
    // Rzad 0: -501 206 2011
    // Rzad 1: 908 101 206
    // Rzad 2: 303 456 596

    return 0;
}
