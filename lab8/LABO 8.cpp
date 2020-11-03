#include <iostream> 
#include <fstream>
#include <sstream>
#include <list>
#include <vector>
#include <map>
#include <stack>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <memory>
#include <iomanip>
#include <numeric>
#include <algorithm>
#include <string>
#include <random>
#include <chrono>
#include <functional>

using namespace std;

void obetnij(string& napis)
{
    auto poczatek = napis.find_first_not_of("()[]\'\",:;-");
    auto koniec = napis.find_last_not_of("()[]\'\",:;-");

    if (poczatek != string::npos and koniec != string::npos)
        napis = napis.substr(poczatek, koniec - poczatek + 1);
    else
        napis = "";
}

int main()
{
    const int szer_dla_slowa{ 15 };
    const int szer_dla_liczby{ 5 };
    const string nazwa {"ROMEOANDJULIET.txt"};
    ifstream plik_romeo (nazwa);
    if (plik_romeo)
    {
        
        /*
        string slowo;
        map<string, int> slowa;
        while (plik_romeo >> slowo)
        {
            obetnij(slowo);
            slowa[slowo]++;
        }
        plik_romeo.close();
        for (auto wpis : slowa)
        {
            cout<<setw(szer_dla_slowa) << left << wpis.first << setw(szer_dla_liczby) << right << wpis.second << endl;
        } 
       
       */
        
        string slowo;
        
        map<string ,map<string, int>> para;
        string temp="";
        while (plik_romeo >> slowo)
        {
            obetnij(slowo);
            if (slowo != "")
            {
                if (!para.count(temp)) //1 jesli nie ma słowa, 0 jesi jest
                {

                    map <string, int> wewnetrzna;
                    wewnetrzna[slowo] = 1;
                    para[temp] = wewnetrzna;

                }
                else
                {
                    if (para[temp].count(slowo))
                    {
                        para[temp][slowo]++;
                    }
                    else
                    {
                        para[temp][slowo] = 1;
                    }
                }
                temp = slowo;
            }
        }
        plik_romeo.close();

        for (auto& wpis : para)
        {
            cout << setw(szer_dla_slowa) << left << wpis.first << endl;
            for (auto& wpis2 : wpis.second)
            {
                cout<< '\t'<<setw(szer_dla_slowa)<<  wpis2.first <<setw(szer_dla_slowa)<< wpis2.second << endl;
            }
        }  

    }
    
    return 0;
}


/*
dla:  i -> liczba_zdań
    losowe_slowo = slowo : slowo.length > 3
    tekst_wynikowy += losowe_slowo
    poprzednie_slowo = losowe_slowo

    dopóki: ostatni znak tekst_wynikowy != '.'
             para[poprzednie_slowo] - wybieramy najczęściej występujące (ja wtedy obniżam ilość wystąpień o 1/3, żeby się nie powtarzały)
              jeśli wybrane słowo jest puste, losuję tak jak pierwsze słowo

*/