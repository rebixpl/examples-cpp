#include <iostream>

using namespace std;

int main()
{
    // Użycie zagnieżdżonych pętli do iteracji tablic wielowymiarowych
    const int MAX_ROWS = 3;
    const int MAX_COLS = 4;

    int MyNums[MAX_ROWS][MAX_COLS] = {{34, -1, 879, 22},
                                      {24, 365, -101, -1},
                                      {-20, 40, 90, 97}};

    // Iteracja tablicy MyNums
    for (int Row = 0; Row < MAX_ROWS; Row++)
    {
        for (int Column = 0; Column < MAX_COLS; Column++)
        {
            std::cout << "Liczba[" << Row << "][" << Column << "] = " << MyNums[Row][Column] << std::endl;
        }
    }

    // OUTPUT:
    // Liczba[0][0] = 34
    // Liczba[0][1] = -1
    // Liczba[0][2] = 879
    // Liczba[0][3] = 22
    // Liczba[1][0] = 24
    // Liczba[1][1] = 365
    // Liczba[1][2] = -101
    // Liczba[1][3] = -1
    // Liczba[2][0] = -20
    // Liczba[2][1] = 40
    // Liczba[2][2] = 90
    // Liczba[2][3] = 97

    return 0;
}
