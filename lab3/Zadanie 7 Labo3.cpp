#include <iostream>
using namespace std;
void wyswietlenie(int tablica[],int dlugosctablicy)
{
    if (dlugosctablicy > 0) // długość tablicy musi byc większa od zera bo odejmujemy 1 od długosci, a zakres mamy do 0; 1-1=0 ale już 0-1=-1. Co by naruszyło pamięć
    {
        cout << tablica[dlugosctablicy - 1] << endl; // wyświetlamy ostatni element, skoro długoś jest równa 8, 
                                                     //to w tym miejscu wyświetlimy element o indeksie 7 (czyli ostatni element)
        wyswietlenie(tablica, dlugosctablicy - 1);  // teraz przekazujemy długość tablicy mniejszą o o jeden, co spowoduje wyświetlenie elementu o indeksie długośćtablicy-1-1, czyli przedostatnim
    } 
}

int main()
{
    const int dlugoscTablicy = 8;
    int Tablica[dlugoscTablicy] = { 1,2,3,4,5,6,7,8 };
    wyswietlenie(Tablica, dlugoscTablicy);
    
}

