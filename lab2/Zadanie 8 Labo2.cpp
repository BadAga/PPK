#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    //by wygenerować losowe (zmiennoprzecinkowe) wartość w przedziale 0-1, 
    //trzeba wziać większy zakres do wygenerowania liczby i potem podzielić by się wartości zgadzały z zakresem
    int gornyZakres = 1000;
    int dolnyZakres = 0;

    const int liczbaElementow = 6;
    double Tablica[liczbaElementow];
    cout << "Tablica pierwotna wygląda tak: " << endl;
    for (int i = 0; i < 6; i++)
    {
        const int losowaWartosc = (rand() % (gornyZakres + 1 - dolnyZakres));
        Tablica[i] = { losowaWartosc / 1000.0 };
        cout << "Zawartosc elementu " << i + 1 << " to: " << Tablica[i] << endl;

    }
    cout << "Tablica z odwroconym porzadkiem wyglada tak: " << endl;
    double TablicaOdwrocona[liczbaElementow];
    for (int i = 0; i < 6; i++)
    {
        TablicaOdwrocona[i] = Tablica[(5 - i)];
        cout << "Zawartosc elementu " << i + 1 << " to: " << TablicaOdwrocona[i] << endl;

    }

    

}