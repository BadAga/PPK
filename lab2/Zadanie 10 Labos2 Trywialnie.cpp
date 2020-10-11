
#include <iostream>
using namespace std;
int main()
{
    const int iloscWierszy = 5;
    const int iloscKolumn = 5;
    int Tablica[iloscWierszy][iloscKolumn] = { 1,2,3,4,5,16,17,18,19,6,15,24,25,20,7,14,23,22,21,8,13,12,11,10,9 };

        for (int wiersz=0; wiersz<5; wiersz++)
        {
            for (int kolumna = 0; kolumna < 5; kolumna++)
            {
                cout << Tablica[wiersz][kolumna] << '\t';
            }
            cout << endl;
         }  

         
         
}

