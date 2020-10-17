#include <iostream>
using namespace std;

void funkcja11(string & im, string & nazw, int & w) //ampersand modyfikuje oryginał
{
	cout << "podaj imie:";
	cin >> im;
	cout << endl<<"podaj nazwisko:";
	cin >> nazw;
	cout << endl<<"podaj wiek:";
	cin >> w;


}


int main()
{
	string imie;
	string nazwisko;
	int wiek;
	funkcja11(imie, nazwisko, wiek);
	cout << endl<<imie;
	cout << endl<<nazwisko;
	cout << endl<<wiek;

}

