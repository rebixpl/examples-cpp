#include <iostream>

using namespace std;

void DisplayArray(int numbers[], int length){
    for(int i = 0; i < length; i++){
        cout << "numbers[" << i << "] = " << numbers[i] << "\n";
    }
    cout << "\n";
}

void DisplayArray(char chars[], int length){
    for(int i = 0; i < length; i++){
        cout << "chars[" << i << "] = " << chars[i] << "\n";
    }
    cout << "\n";
}

int main()
{
    const short int ARRAY_LENGTH = 4;
    int myNumbers[ARRAY_LENGTH] = {24,58,-1,245};

    // Przekazanie funkcji tablicy wartości
    DisplayArray(myNumbers, ARRAY_LENGTH);

    char myChars[ARRAY_LENGTH] {'C','P','P','\0'};
    DisplayArray(myChars, ARRAY_LENGTH);

    // OUTPUT: 
    // numbers[0] = 24
    // numbers[1] = 58
    // numbers[2] = -1
    // numbers[3] = 245

    // chars[0] = C
    // chars[1] = P
    // chars[2] = P
    // chars[3] = 
    return 0;
}