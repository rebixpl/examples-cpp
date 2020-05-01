#include <iostream>
#include <vector>

int main()
{
    // Tablice dynamiczne
    // -> std::vector<typ_danych> nazwaTablicy (wielkość_tablicy)
    std::vector<int> dynArrNums(3);

    dynArrNums[0] = 365;
    dynArrNums[1] = 1024;
    dynArrNums[2] = 2020;

    std::cout << "Ilosc elementow tablicy: " << dynArrNums.size() << "\n"; // OUTPUT: 3

    int anotherNum = 0;
    std::cin >> anotherNum;

    // Rozszerzanie tablicy o kolejną wartość!!! -> używamy array.push_back(wartość);
    dynArrNums.push_back(anotherNum);

    std::cout << "Ilosc elementow tablicy: " << dynArrNums.size() << "\n"; // OUTPUT: 4
    
    std::cout << "Ostatni element: " << dynArrNums[dynArrNums.size() - 1] << "\n"; // OUTPUT: anotherNum
    return 0;   
}
