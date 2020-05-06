#include <iostream>

using namespace std;

void CalculateSquare(const int& number,int& result){
    result = number * number;
}


int main(int argc, const char **argv)
{
    // Referencje
    cout << "Podaj liczbe ktora chcesz podniesc o kwadratu: ";
    int number = 0;
    cin>>number;

    int square = 0;
    CalculateSquare(number, square);
    cout << number << " ^2 = " << square << "\n";
    return 0;
}
