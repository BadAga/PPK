
#include <iostream>
using namespace std;

double szescian(double n)
{
    return n * n * n;
}
int main()
{
    double liczba;
    cout << "podaj liczbe: ";
    cin >> liczba;
    cout << endl;
    
    cout << "szescian podanej liczby wynosi: " << szescian(liczba); // przywołujemy funkcję
    return 0;
}

