#include <iostream>
#include <math.h>
#include <conio.h>
// math.h bo będzimy używać pierwiastka do delty
using namespace std;
int main()
{
    float a, b, c, delta;
    cout << "Podaj a, b i c; po kazdej danej kliknij enter" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "uklad jest tozsamosciowy" << endl;
    }
    else if (a == 0 && b != 0)
    {
        cout << "jest to funkcja liniowa o rozwiazaniu rownym: " << -(c / b) << endl;
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        cout << "uklad jest sprzeczny" << endl;
    }
    // liczymy delte
    delta = (b * b) - 4 * a * c;
    if (a != 0 && delta > 0)
    {
        cout << "Uklad oznaczony o rozwiazaniach x1: " << (-b - (sqrt(delta))) / (2 * a) << " i x2: " << (-b + (sqrt(delta))) / (2 * a) << endl;
    }
    else if (a != 0 && delta < 0)
    {
        cout << "Brak rozwiazan" << endl;
    }
    else if (a != 0 && delta == 0)
    {
        cout << "jedno rozwiazanie podwojne rowne: " << -(b / (2 * a)) << endl;
    }

}
