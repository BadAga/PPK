#include <iostream>
#include <fstream> 
#include <sstream> 
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
   // srand(time(NULL));
    ofstream pliklos("losowe liczby z przedzialu");
    const int N = 15;
    int d = 1;
    int g = 100;
    if (pliklos) //jesli plik chce się otwierac
    {
        for (int i = 0; i < N; i++)
        {
            int liczba = 1 + rand() % (100 - 1 + 1);
            pliklos << liczba << " ";
        }
        pliklos.close();
    }

    ifstream plikZlos("losowe liczby z przedzialu"); 
    if (plikZlos)
    {
        double liczba;
        double srednia = 0.0;
        double suma = 0.0;
        int ile = 0;
        while (plikZlos >> liczba) // jeżeli da się zczytać liczbę to:
        {
            suma += liczba;
            ile++;
        }
        srednia = suma / ile;
        cout << "Srednia z liczb w pliku wynosi: "<< srednia<<endl;
        
            double sumadoodchylenia = 0.0;
        
            while (plikZlos >> liczba) // jeżeli da się zczytać liczbę to:
            {
                sumadoodchylenia += (liczba - srednia) * (liczba - srednia);
            }
            
            double OdchylenieStandardowe = sqrt(sumadoodchylenia / ile); //nie działa 
            cout << "Odchylenie standardowe wynosi: " << OdchylenieStandardowe << endl;
        }
    
}

