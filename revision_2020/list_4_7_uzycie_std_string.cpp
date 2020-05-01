#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Użycie std::string
    string greetings ("Witaj, std::string!");
    cout << greetings << "\n";

    // Pobieranie wierszu tekstu przy użyciu getline
    cout << "Podaj wiersz tekstu: " << endl;
    string firstLine;
    getline(cin, firstLine);

    cout << "Podaj inny tekst: " << endl;
    string secondLine;
    getline(cin, secondLine);

    // Łączenie tekstów
    string conected = firstLine + " " + secondLine;
    cout << conected << "\n";

    // Tworzenie kopii tekstu
    string copy;
    copy = conected;
    cout << "Copy = " << copy << "\n";

    return 0;
}
