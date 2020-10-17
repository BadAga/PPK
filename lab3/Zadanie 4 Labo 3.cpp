#include <iostream>
using namespace std;

void zamiana(int a, int b)
{

    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "zmienna pierwsza ma teraz wartosc : " << a << endl;
    cout << "zmienna druga ma teraz wartosc : " << b << endl;
}

int main()
{
    int pierwszawartosc;
    cout << "podaj wartsc jaka chcesz przypisac pierwszej zmiennej: ";
    cin >> pierwszawartosc;
    
    cout << endl;
    int drugawartosc;
    cout << "podaj wartsc jaka chcesz przypisac drugiej zmiennej: ";
    cin >> drugawartosc;
    
    cout << endl;
    
    zamiana(pierwszawartosc, drugawartosc); // użycie void, więc ciało voida się wyświetli
    
    return 0; 


    
    
}

