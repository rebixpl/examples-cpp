#include <iostream>
#include <string>

using namespace std;

template <typename T>
class smart_pointer
{
private:
    T* m_pRawPointer;

public:
    smart_pointer(T* pData) : m_pRawPointer(pData) {} //Konstruktor
    ~smart_pointer() { delete m_pRawPointer; } // Destruktor

    T& operator* () const //Operator dereferencji
    {
        return *(m_pRawPointer);
    }

    T* operator-> () const //Operator wyboru elementu składowego
    {
        return m_pRawPointer;
    }
};

class Date
{
private:
    int Day, Month, Year;
    string DateInString;

public:
    //Konstruktor inicjalizujący obiekt dla dnia, miesiąca, roku
    Date(int inputDay, int inputMonth, int inputYear)
        : Day(inputDay), Month(inputMonth), Year(inputYear) {};

    void DisplayDate()
    {
        cout << Day << " / " << Month << " / " << Year << "\n";
    }
};

int main()
{
    smart_pointer<int> pDynamicInt(new int(42));
    cout << "Dynamicznie zaalokowana liczba calkowita = " << *pDynamicInt;

    smart_pointer<Date> pDate(new Date(25, 12, 2019));
    cout << endl << "Data to: ";
    pDate->DisplayDate();

    return 0;
}
