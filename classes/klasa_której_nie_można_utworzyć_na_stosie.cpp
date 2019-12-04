#include <iostream>

using namespace std;

class MonsterDB //Baza, która zawiera GIGABAJTY danych nie może być tworzona na stosie
{               //który ma najczęściej ograniczoną pojemność
private:
    ~MonsterDB() {}; //Prywatny destruktor uniemożliwia utworzenie egzemplarza klasy na
                     //stosie
public:
    static void DestroyInstance(MonsterDB* pInstance)
    {
        //Statyczny elements składowy może uzyskać dostęp do prywatnego destruktora,
        //inaczej nie można zwolnić pamnięci, ponieważ destruktor jest właśnie prywatny
        //i nie można wywołać go w main()
        cout << "Zwolnienie pamieci funkcja DestroyInstance()" << endl;
        delete pInstance;
    }

    //Kilka innych metod
};

int main()
{
    //MonsterDB myDatabase; //nie można utworzyć klasy MonsterDB w ten sposób]

    MonsterDB* myDatabase = new MonsterDB();

    //myDatabase-> metody elementu składowego

    //delete myDatabase; //nie można wywołać prywatnego destruktora

    //Zwolnienie pamięci
    MonsterDB::DestroyInstance(myDatabase);

    return 0;
}
