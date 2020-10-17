
#include <iostream>
using namespace std;
int rekurencyjnie(int n)
{
    if (n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return rekurencyjnie(n - 1) + rekurencyjnie(n - 2);
    }
}

int iteracyjnie(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 1; i < n; i++)
    {
        b = b + a;
        a = b - a;
    }
    return b;
}

int main()
{
    int iloscwyrazow;
    cout << "podaj ile wyrazow ciągu fibonacciego chcesz obliczyc: ";
    cin >> iloscwyrazow;
    cout << endl << rekurencyjnie(iloscwyrazow) << endl;
    cout<<iteracyjnie(iloscwyrazow);
}

