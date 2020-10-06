#include <iostream>
using namespace std;
int main()
{
	int a, b; // zmienna calkowita
	cout << "Podaj a: ";
	cin >> a;
	cout << "a wynosi: " << a << endl;
	cout << "Podaj b: ";
	cin >> b;
	cout << "b wynosi: " << b << endl;
	cout << "Suma wynosi: " << a + b << endl;
	cout << "Iloczyn wynosi: " << a * b << endl;
	cout << "reszta z dzielenia a przez b wynosi: " << a % b << endl;
	cout << "suma bitowa: " << (a | b) << endl;
	cout << "iloczyn bitowy: " << (a & b) << endl;
	cout << "przesunięcie bitowe liczby a o b bitów w lewo: " << (a << b) << endl;
	cout << "dzielenie z resztą a przez b: " << (a % b) << endl;
	return 0;
}
