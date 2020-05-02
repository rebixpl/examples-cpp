#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void DisplayNums(vector<int> &dynArray)
{
    for_each(dynArray.begin(), dynArray.end(),
             [](int element) { cout << element << "\n"; });
}

int main()
{
    // Składnia funkcji lambda przedstawia się następująco:
    //! [parametry opcjonalne](lista parametrów){ polecenia; }

    vector<int> myNumbers;
    myNumbers.push_back(501);
    myNumbers.push_back(-1);
    myNumbers.push_back(25);
    myNumbers.push_back(-35);

    DisplayNums(myNumbers);

    // OUTPUT:
    // 501
    // -1
    // 25
    // -35

    cout << "Sortowanie w kolejności malejącej" << endl;

    sort(myNumbers.begin(), myNumbers.end(),
         [](int num1, int num2) { return (num2 > num1); });

    DisplayNums(myNumbers);

    // OUTPUT:
    // -35
    // -1
    // 25
    // 501

    return 0;
}
