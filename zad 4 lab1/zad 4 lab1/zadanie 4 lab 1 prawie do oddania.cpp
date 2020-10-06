#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
    int x; // x- proszony nr dnia roku
    int nrmies; // numer miesiąca 
    cout << "Podaj dzien roku: ";
    cin >> x;
    if (x >= 1 && x <= 31) // styczeń ma 31 dni, stąd ten zakres
    {
        nrmies = 1;
    }
    else if (x >= 32 && x <= 60) // 31+ 29 to 60, luty ma 29 dni w 2020, stąd ten zakre, analogicznie do kolejnych miesięcy
    {
        x = x - 31;
        nrmies = 2;
    }
    else if (x >= 61 && x <= 91)
    {
        x = x - 60;
        nrmies = 3;
    }
    else if (x >= 92 && x <= 121)
    {
        x = x - 91;
        nrmies = 4;
    }
    else if (x >= 122 && x <= 152)
    {
        x = x - 121;
        nrmies = 5;
    }
    else if (x >= 153 && x <= 182)
    {
        x = x - 152;
        nrmies = 6;
    }
    else if (x >= 183 && x <= 213)
    {
        x = x - 182;
        nrmies = 7;
    }
    else if (x >= 214 && x <= 244)
    {
        x = x - 213;
        nrmies = 8;
    }
    else if (x >= 245 && x <= 274)
    {
        x = x - 244;
        nrmies = 9;
    }
    else if (x >= 275 && x <= 305)
    {
        x = x - 274;
        nrmies = 10;
    }
    else if (x >= 306 && x <= 335)
    {
        x = x - 305;
        nrmies = 11;
    }
    else if (x >= 336 && x <= 366)
    {
        x = x - 335;
        nrmies = 12;
    }
    cout << x << "." << nrmies << "." << "2020"; // końcowy zapis z dodatkeim roku
}
