#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class CDisplay
{
public:
    void operator () (string Input) const
    {
        cout << Input << "\n";
    }
};

int main()
{
    CDisplay myDisplayFunc;

    // Odpowiednik wywolania myDisplayFunc.operator () ("Wyswietl ten ciag tekstowy!");
    myDisplayFunc("Jebac disa orka");

    return 0;
}
