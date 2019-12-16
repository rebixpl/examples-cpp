#include <iostream>
#include <memory> // To polecenie jest konieczne w celu użycia std::unique_ptr
#include <string>

using namespace std;

class Date
{
private:
    int Day;
    int Month;
    int Year;

    string DateInString;

public:
    Date(int inputDay, int inputMonth, int inputYear)
        :Day(inputDay), Month(inputMonth), Year(inputYear) {};

    void DisplayDate()
    {
        cout << Day << " / " << Month << " / " << Year << "\n";
    }
};

int main()
{
    unique_ptr<int> pDynamicAllocInt(new int);
    *pDynamicAllocInt = 42;

    //użycie sprytnego wskaźnika typu, takiego jak int*
    cout << "Liczba calkowita to: " << *pDynamicAllocInt << "\n";

    unique_ptr<Date> pHoliday(new Date(25,12,2019));
    cout << "Nowy egzemplarz daty zawiera: ";

    // Użycie pHoliday w taki sposób, jakby to był Date*.
    pHoliday->DisplayDate();

    // Podczas używania unique_ptr poniższe polecenia są zbędne:
    // delete pDynamicAllocInteger;
    // delete pHoliday;
    
    // Sekret kryje się w klasie sprytnego wskaźnika std::unique_ptr implementującej operator 
    //(odpowiednio) dereferencji (*) i wyboru elementu składowego (->)

    return 0;
}
