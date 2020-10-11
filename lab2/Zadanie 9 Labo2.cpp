
#include <iostream>
using namespace std;

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    const int iloscwierszy=10;
    const int ilosckolumn=10;
    int tabliczka[iloscwierszy][ilosckolumn];
    int wiersz, kolumna;
    cout << "Tabliczka mnozenia 10 na 10 wyglada tak: " << endl;
    for (wiersz = 0; wiersz <= 9; wiersz++) 
    {
        for (kolumna = 0; kolumna <= 9; kolumna++)
        {
            tabliczka[wiersz][kolumna] = (wiersz+1) * (kolumna+1);
            cout << tabliczka[wiersz][kolumna] << '\t';
        }
        cout << endl;
    }
   
    return 0;
}
