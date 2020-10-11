#include <iostream>
using namespace std;


int main()
{
    const int m = 5;// ilość wierszy
    const int n = 5;//ilość kolumn
    int Tablica[m][n];
    int pierwszyWiersz = 0; //wiersz lewego górnego wierzchołka
    int pierwszaKolumna = 0; // kolumna lewego górnego wierzchołka
    int ostatniWiersz = m - 1;
    int ostatniaKolumna = n - 1;
    int wartosc = 1;
    while (wartosc <= m * n)
    {
        for (int i = pierwszaKolumna; i <= ostatniaKolumna; i++)
        {
            Tablica[pierwszyWiersz][i] = wartosc++;
        }
        pierwszyWiersz++;
        for (int i = pierwszyWiersz; i <= ostatniWiersz; i++)
        {
            Tablica[i][ostatniaKolumna] = wartosc++;
        }
        ostatniaKolumna--;
        for (int i = ostatniaKolumna; i >= pierwszaKolumna; i--)
        {
            Tablica[ostatniWiersz][i] = wartosc++;

        }
        ostatniWiersz--;
        for (int i = ostatniWiersz; i >= pierwszyWiersz; i--)
        {
            Tablica[i][pierwszaKolumna] = wartosc++;
        }
        pierwszaKolumna++;
    }
    
    for (int a = 0; a < 5; a++)
        {
            for (int b = 0; b < 5; b++)
                {
                    cout << Tablica[a][b] << '\t';
                }
            cout << endl;
        }

    system("pause");

}

