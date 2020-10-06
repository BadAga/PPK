#include <iostream>
using namespace std;
int main()
{
	// double bo wykładniki nie muszą być liczbami całkowitymi
	// a,b,c 1/2 współczynniki z 1 lub 2 równania
	double a1, b1, c1, a2, b2, c2;
	cout << "Podaj a1,b1,c1,a2, b2, c2 " << endl;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	cout << a1 << "x + " << b1 << "y = " << c1 << endl;
	cout << a2 << "x + " << b2 << "y = " << c2 << endl;
	// Metoda wyznaczników
	double W = a1 * b2 - a2 * b1;
	double Wx = c1 * b2 - c2 * b1;
	double Wy = a1 * c2 - a2 * c1;
	cout << "W = " << W << endl;
	cout << "Wx = " << Wx << endl;
	cout << "Wy = " << Wy << endl;
	// Sprawdzenie czy układ jest tożsamościowy albo sprzeczny
	if (W != 0)
	{
		cout << "Uklad jest oznaczony i ma rozwiazania: x = " << Wx / W << " oraz y = " << Wy / W;
	}
	else if (W == 0 && Wx == 0 && Wy == 0)
	{
		cout << "Uklad jest nieoznaczony, posiada nieskonczenie wiele rozwiazan";
	}
	else if (W == 0 && Wx != 0 || Wy != 0)
	{
		cout << "Uklad jest sprzeczny";
	}
	return 0;
}
