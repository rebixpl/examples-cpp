#include <iostream>

int main(){
    double multiply = 0;
    for(int i = 1; i <= 999; i++){
        if (((i % 3) == 0) || ((i % 5) == 0)){
            multiply += i;
        }
    }
    std::cout << multiply << std::endl;
    return 0;
}