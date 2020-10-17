#include <iostream>
#include <cmath>
using namespace std;
double odlegosc(double iks1, double iks2, double igrek1, double igrek2)
{
    double wynik;
    wynik = sqrt(((iks2 - iks1) * (iks2 - iks1)) + ((igrek2 - igrek1) * (igrek2 - igrek1)));
    return wynik;
}

int main()
{
    double x1;
    cout << "podaj wspolrzedne pierwszego punktu A x1= ";
    cin >> x1;
    double y1;
    cout << " y1: ";
    cin >> y1;
    double x2;
    cout << endl<<"podaj wspolrzedne drugiego punktu B x2= ";
    cin >> x2;
    double y2;
    cout << " y2: ";
    cin >> y2;
    cout << endl<<"odleglosc miedzy punktami A i B wynosi: " << odlegosc(x1, x2, y1, y2);
    return 0;

}

