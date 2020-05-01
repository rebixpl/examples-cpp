#include <iostream>

#define Pi 3.14286
#define mainAppThemeColor 32

using namespace std;

enum directions
{
    North = 25,
    South,
    East,
    West
};

int main()
{
    cout << "North = " << North << endl;
    cout << "South = " << South << endl;
    cout << "East = " << East << endl;
    cout << "West = " << West << endl;

    // utworzenie zmiennej typu directions, który jest enum
    directions windDirection = West;
    cout << "variable windDirection = " << windDirection << endl;

    if(mainAppThemeColor == 32)
    {
        cout << "That's green! ";
    }
    else
    {
        cout << "That's yellow!";
    }

    return 0;
}
