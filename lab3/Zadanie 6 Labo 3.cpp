
#include <iostream>
#include < cstdlib>
#include <time.h> 
using namespace std;
void funkcja(double tablica[], int dl, double a, double b)
{
    
    for (int i = 0; i < dl; i++)
    {
        double liczba = a + (double)rand()/RAND_MAX * (b - a); //losowanie liczby rzeczywistej z zakresu a,b
        
         tablica[i] = liczba;
    }
    for (int i = 0; i < dl; i++)
    {
        cout << tablica[i]<< '\t';
     }
}

int main()
{
    srand(time(NULL));
    const int dlugosc=19;
    double dolnagranica, gornagranica;
    
    cout << endl<<"Chce wypelnic tablice liczbami od : ";
    cin >> dolnagranica;
    cout <<endl<< "do: ";
    cin >> gornagranica;
    double Tablica[dlugosc];
    funkcja(Tablica, dlugosc, dolnagranica, gornagranica);
    

}

