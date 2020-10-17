
#include <iostream>
using namespace std;
double potegowanie(double podstawa,  int wykladnik)
{
    double wynik = 1.0; 
    // bo każda liczba do 0 potęgi to 1
    for (int i = 0; i < wykladnik; i++)
    {
        wynik = wynik * podstawa;
    }
    return wynik;
}
int main()
{
    double p;
    int w;
    cout << "podaj podstawe: ";
    cin >> p;
    cout << endl;
    cout << "podaj wykladnik (nieujemny): ";
    cin >> w;
    cout << endl;
    cout << w << " potega " << p << " wynosi: " << potegowanie(p, w) << endl;
    return 0;


}

