
#include <iostream>
using namespace std;
int main()
{
   
    int gornyZakres = 1;
    int dolnyZakres = 0;
    
    const int liczbaElementow=6;
    int Tablica[liczbaElementow];
    const int losowaWartosc1 = (rand() % (gornyZakres + 1 - dolnyZakres));
    const int losowaWartosc2 = (rand() % (gornyZakres + 1 - dolnyZakres));
    const int losowaWartosc3 = (rand() % (gornyZakres + 1 - dolnyZakres));
    const int losowaWartosc4 = (rand() % (gornyZakres + 1 - dolnyZakres));
    const int losowaWartosc5 = (rand() % (gornyZakres + 1 - dolnyZakres));
    const int losowaWartosc6 = (rand() % (gornyZakres + 1 - dolnyZakres));
    Tablica[0] = { losowaWartosc1 };
    Tablica[1] = { losowaWartosc2 };
    Tablica[2] = { losowaWartosc3 };
    Tablica[3] = { losowaWartosc4 };
    Tablica[4] = { losowaWartosc5 };
    Tablica[5] = { losowaWartosc6 };
    cout << "Zawartosc elementu 1: " << Tablica[0] << endl;
    cout << "Zawartosc elementu 2: " << Tablica[1] << endl;
    cout << "Zawartosc elementu 3: " << Tablica[2] << endl;
    cout << "Zawartosc elementu 4: " << Tablica[3] << endl;
    cout << "Zawartosc elementu 5: " << Tablica[4] << endl;
    cout << "Zawartosc elementu 6: " << Tablica[5] << endl;

   
}

