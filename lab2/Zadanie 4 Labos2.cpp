
#include <iostream>
using namespace std;

int main()
{
	int dol, gora;
	cout << "podaj gorny zakres: ";
	cin >> gora;
	cout << endl;
	
	cout << "podaj dolny zakres: ";
	
	cin >> dol;
	cout << endl;
	char odp = ' ';
	int middle;
	middle = (gora + dol) / 2;
	do 
	{
		cout << "Czy liczba jest mniejsza od: " << middle << " jesli jest mniejsza to daj t, jesli nie to n: ";
		cin >> odp;
		cout << endl;
		if (odp == 't')
		{
			gora = middle;
			middle = (gora + dol) / 2;

		}
		else
		{
			dol = middle;
			middle = (gora + dol) / 2;
		}

	} while (middle != gora && middle != dol);

	cout << "twoja liczba to: " << middle;
}

