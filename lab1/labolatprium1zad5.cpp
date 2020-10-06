#include <iostream>
using namespace std;
int main()
{
	int rok;
	cout << "Podaj rok:";
	cin >> rok;
	// porównujemy resztę dzielenia przez cztery danego roku, jeśli jest równa zero to jest to rok przestępny
	// bo lata przestępne są co 4 lata
	if (rok % 4 == 0)
	{
		cout << "Rok " << rok << " jest przestepny." << endl;
	}
	else
	{
		cout << "Rok " << rok << " nie jest przestepny." << endl;
	}
	if (rok >= 0)
	{
		cout << "Od początku naszej ery było: " << rok / 4 << " lat przestepnych." << endl;
	}
	else
	{
		cout << "Rok nie jest z naszej ery" << endl;
	}
}