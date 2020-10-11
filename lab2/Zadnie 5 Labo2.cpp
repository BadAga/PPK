
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a, q, n;
    cout << "Podaj pierwszy wyraz ciagu: " << endl;
    cin >> a;
    cout << "Podaj iloraz ciagu: " << endl;
    cin >> q;
    cout << "Ile wyrazow ciagu wyswietlic?" << endl;
    cin >> n;
    int sum1;
    sum1 = 0;
    // suma dodawana po kolei
    int b = a;
    // b  to ostatni wyraz ciągu
    cout << "Kolejne wyrazy ciagu to: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b << ' ';
        sum1 = sum1 + b;

        b = b * q;

    }
    cout << "suma1: " << sum1 << endl;

    // sum2= ze wzoru sum2= a* (1- q^n)/(1-q)

    int licznik = 1;
    // q^n
    for (int i = 0; i < n; i++)
    {
        licznik = licznik * q;

    }

    int sum2;
    sum2 = a * (1 - licznik) / (1 - q);
    cout << "suma ze wzoru: " << sum2;
    return 0;
}