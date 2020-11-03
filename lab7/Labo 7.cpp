#include <iostream>
#include <vector>
#include <memory>
#include <ctime>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;
struct macierz
{
    vector <vector<int>> moja_macierz;
};

vector <vector<int>> tworzaca_i_wypelniajaca (int kolumny,int wiersze)
{
    vector <vector<int>> macierz;
    for (int j = 0; j < wiersze; j++)
    {
        vector<int>kolumna;
        for (int i = 0; i < kolumny; i++)
        {
            int q = 10;
            int losowaliczba = rand()%(q+1);
            kolumna.push_back(losowaliczba);
        }
        macierz.push_back(kolumna);
    }
    return macierz;
}
void zapisz_do_pliku(ostream& strumien, vector <vector<int>> macierz_do_zapisania)
{
    for (int j = 0; j < macierz_do_zapisania.size(); j++)
    {
        for (int i = 0; i < macierz_do_zapisania[j].size(); i++)
        {
            strumien << macierz_do_zapisania[j][i] << " ";
        }
        strumien << endl;
    }
}
vector<std::vector<int>> odczytaj_macierz(std::istream& s)
{
    vector<std::vector<int>>  macierz_do_zwrocenia;  // pionowy wektor

    string linia;
    while (getline(s, linia))
    {
        vector<int> wiersz;
        stringstream ss{ linia };
        int liczba;

        while (ss >> liczba)
        {
            //std::cout << "(" << liczba << ")" << " ";
            wiersz.push_back(liczba);
        }
        macierz_do_zwrocenia.push_back(wiersz);
    }

    return macierz_do_zwrocenia; 
}

vector<vector<int>> dodawanie_macierzy(vector<std::vector<int>>macierz1, vector<std::vector<int>>macierz2)
{
    vector<vector<int>> wynikowa;
    if (macierz1.size() == macierz2.size())
    {
        for (int j = 0; j < macierz1.size(); j++)
        {
            vector<int> wierszeW;
            for (int i = 0; i < macierz1[j].size(); i++)
            {
                wierszeW.push_back(macierz1[j][i] + macierz2[j][i]);
            }
            wynikowa.push_back(wierszeW);
        }
    }
    return wynikowa;
}
vector<vector<int>> mnozenie_macierzy(vector<std::vector<int>>macierz1, vector<std::vector<int>>macierz2)
{
    vector<vector<int>> wynikowa;
    // i,j wiersza  
    //a,b kolumny
    for (int i = 0; i < macierz1.size(); i++)
    {
        vector<int> wynikowaW;
        for (int b = 0; b < macierz2[0].size(); b++)
        {
            int suma=0;
            for (int a = 0; a < macierz1[i].size(); a++)
            {
                for (int j = 0; j < macierz2.size(); j++)
                {
                    suma += (macierz1[i][a] * macierz2[j][b]);
                }
            }
            wynikowaW.push_back(suma);
        }
        wynikowa.push_back(wynikowaW);
    }
    
    return wynikowa;
}
vector<vector<int>> transpozycja(vector<std::vector<int>>macierz)
{
   
    vector<vector<int>> wynikowa;
    

    for (int i = 0; i < macierz.size(); i++)
    {
        vector<int>wynikowaW;
        for (int j=0 ; j < macierz[0].size(); j++)
        {
            wynikowaW.push_back(macierz[j][i]);
        }
        wynikowa.push_back(wynikowaW);
    }

    return wynikowa;
}
int main()
{
    //srand(time(NULL));
    int w = 5;
    int k = 6;
    vector <vector<int>> wygenerowana_macierz = tworzaca_i_wypelniajaca(k, w);
    macierz Macierz1;
    Macierz1.moja_macierz = wygenerowana_macierz;
    // zapis macierzy do pliku
    ofstream plik("Plik_z_macierza");
    if (plik)
    {
        zapisz_do_pliku(plik, Macierz1.moja_macierz);
        plik.close();
    }
    //odczyt macierzy z pliku
    ifstream plik2("Plik_z_macierza");
    if (plik2)
    {
        zapisz_do_pliku(cout, odczytaj_macierz(plik2));
        plik2.close();
    }
    // dodawanie macierzy
    vector <vector<int>> wygenerowana_macierz2 = tworzaca_i_wypelniajaca(k, w);
    macierz Macierz2;
    Macierz2.moja_macierz = wygenerowana_macierz2;

    //mnożenie
    int w2 = 3;
    int k2 = 4;
    int w3 = 4;
    int k3 = 5;
    vector <vector<int>> Macierz3{ tworzaca_i_wypelniajaca(k2, w2) };
    vector <vector<int>>Macierz4{ tworzaca_i_wypelniajaca(k3, w3) };
    cout << endl << "-------------------" << endl;;
    zapisz_do_pliku(cout, Macierz3);
    cout << endl << "-------------------" << endl;
    zapisz_do_pliku(cout, Macierz4);
    cout << endl << "-------------------"<<endl;
    auto MacierzWymnozona{ mnozenie_macierzy(Macierz3, Macierz4) };
    zapisz_do_pliku(cout, MacierzWymnozona);
    cout << endl << "-------------------" << endl;
   
   zapisz_do_pliku(cout, transpozycja(MacierzWymnozona));

    return 0;
}

