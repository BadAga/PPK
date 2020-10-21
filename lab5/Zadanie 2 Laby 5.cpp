#include <iostream>
#include <fstream> // biblioteki ta umożliwia pracę z plikami
#include <sstream> // do stringstream czyli do strumieni napisowych
#include <vector>
using namespace std;
void wypisuje_liczby_do_strumienia(ostream& strumien, const int W, const int K)
{
    for (int w = 1; w <= W; w++)
    {
        for (int k = 1; k <= K; k++)
        { 
            strumien << w*k << '\t';
        }
        strumien << endl;
    }
}

int main()
{
    const int W = 5;
    const int K = 5;
    ofstream plik_z_tabliczka("Tabliczka mnozenia");
    if (plik_z_tabliczka)
    {
        wypisuje_liczby_do_strumienia(plik_z_tabliczka, W , K );
        plik_z_tabliczka.close();
    }
}

