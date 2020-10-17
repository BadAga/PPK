
#include <vector>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
string funkcja10(string lancuchtekstowy )
{
    string zwracany=""; // zwracany jest najpierw pusty
    auto dlugosc=lancuchtekstowy.length();
    string zmienione=""; // zmienione jest najpierw pusty
    for (int i = 0; i < dlugosc; i++)
    {
        int lospozycji = rand() % (dlugosc);
        if (zmienione.find(lospozycji) == string::npos)//jeśli nie znaleźliśmy już zmienionej pozycji
        {
            zwracany += lancuchtekstowy[lospozycji];
            zmienione += lospozycji; // za każdym razem po wylosowaniu w zmienione będą zapisywane pozycje, które już zmieniłam
        }
        else // jeśli znaleźliśmy zmienioną już literę to losujemy jeszcze raz dla tego samego indeksu
        {
            i--;
        }
    }
    return zwracany;
}

int main()
{
    srand(time(NULL));
    cout << funkcja10("abcdef");

    return 0;
}

