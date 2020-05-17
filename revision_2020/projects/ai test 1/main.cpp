#include <iostream>
#include <string.h>
#include <cstring>

#define  MAX_DATA_LENGTH 50

using namespace std;

void calculate(double InputValue1 = 0, double InputValue2 = 0){
    cout << InputValue1 <<  " * " << InputValue2 << " = " << InputValue1 * InputValue2 << "\n";
}

void showHelp(){
    cout << "THIS IS HELP PAGE" << "\n";
    cout << "hello -> xxx" << "\n";
    cout << "calculate -> run the calculator app" << "\n";
}

int main(int argc, const char** argv) {
    char Data[MAX_DATA_LENGTH];
    
    // Variables
    char Name[MAX_DATA_LENGTH];
    // Variables

    GETDATA:cin.getline(Data, MAX_DATA_LENGTH);
    if(strcasecmp("hello", Data) == 0) // if both are the same
    {
        cout << "Hello what's your name?" << "\n";
        cin.getline(Name, MAX_DATA_LENGTH);
        cout << "Welcome, " << Name << "!" << "\n";
        goto GETDATA;
    } 
    else if(strcasecmp("calculate", Data) == 0)
    {
        double Number1, Number2;
        cout << "input 1: ";
        cin >> Number1;
        cout << "input 2: ";
        cin >> Number2;
        calculate(Number1, Number2);
        goto GETDATA;
    } else if(strcasecmp("help", Data) == 0)
    {
        showHelp();
        goto GETDATA;
    }
    return 0;
}