#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, FOREGROUND_GREEN);
    cout << "Hello World!" << "\n" << "\n";
    SetConsoleTextAttribute(h, FOREGROUND_BLUE);
    cout << "Hello World!" << "\n" << "\n";
    SetConsoleTextAttribute(h, BACKGROUND_RED);
    cout << "Hello World!" << "\n" << "\n";
    
    Beep(1000, 100); //Beep(int ton, int czas) -> wydaje dźwięk
    Beep(2000, 100);
    Beep(3000, 100);
    
    system("PAUSE");

    return 0;
}
