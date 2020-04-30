#include <iostream>
#include "bigint.h"

int main(int argc, const char** argv) {
    BigInt maxNum = 4000000;
    BigInt value1 = 1, value2 = 2;
    BigInt fibSum = 0;
    BigInt evenSum = 0;

    while(fibSum <= maxNum - 1){
        fibSum = value1 + value2;
        //std::cout << fibSum << std::endl;
        value1 = value2;

        if((value1 % 2) == 0){
            evenSum += value1;
        }

        value2 = fibSum;
    }
    std::cout << evenSum << std::endl;
    return 0;
}
