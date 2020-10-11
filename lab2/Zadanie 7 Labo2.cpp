#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time (NULL));
    //by wygenerować losowe (zmiennoprzecinkowe) wartość w przedziale 0-1, 
    //trzeba wziać większy zakres do wygenerowania liczby i potem podzielić by się wartości zgadzały z zakresem
    int gornyZakres = 1000;
    int dolnyZakres = 0;

    const int liczbaElementow = 6;
    double Tablica[liczbaElementow];
    const int losowaWartosc1 = (rand() % (gornyZakres + 1 - dolnyZakres));
    const int losowaWartosc2 = (rand() % (gornyZakres + 1 - dolnyZakres));
    const int losowaWartosc3 = (rand() % (gornyZakres + 1 - dolnyZakres));
    const int losowaWartosc4 = (rand() % (gornyZakres + 1 - dolnyZakres));
    const int losowaWartosc5 = (rand() % (gornyZakres + 1 - dolnyZakres));
    const int losowaWartosc6 = (rand() % (gornyZakres + 1 - dolnyZakres));

    Tablica[0] = { losowaWartosc1 / 1000.0 };
    Tablica[1] = { losowaWartosc2 / 1000.0 };
    Tablica[2] = { losowaWartosc3 / 1000.0 };
    Tablica[3] = { losowaWartosc4 / 1000.0 };
    Tablica[4] = { losowaWartosc5 / 1000.0 };
    Tablica[5] = { losowaWartosc6 / 1000.0 };
    cout << "Zawartosc elementu 1: " << Tablica[0] << endl;
    cout << "Zawartosc elementu 2: " << Tablica[1] << endl;
    cout << "Zawartosc elementu 3: " << Tablica[2] << endl;
    cout << "Zawartosc elementu 4: " << Tablica[3] << endl;
    cout << "Zawartosc elementu 5: " << Tablica[4] << endl;
    cout << "Zawartosc elementu 6: " << Tablica[5] << endl;
    double min = 1.0;
    for (int i = 0; i < 6; i++)
    {
        if (Tablica[i] < min)
        {
            min = Tablica[i];
        }
        else if (Tablica[i] > min)
        {
            min = min;
        }
    }
    cout << "Minimalny element to: " <<min<< endl;


}