
#include <iostream>
using namespace std;
int main()
{
    
    int iloscliczb = 0;
    float max = 0.0;
    float min = 0.0;
    float srednia = 0.0;
    float suma = 0.0;
    float liczba = 0.0;
    cout << "Wprowadz liczbe jesli to koniec wprowadzania liczb to napisz 00: " << '\n';
    cin >> liczba;
    max = liczba;
    min = liczba;
    do
    {
        if (liczba != 00)
        {
            suma = suma + liczba; 
            if (liczba > max)
            {
                max = liczba;
            }
            if (liczba < min)
            {
                min = liczba;
            }
            cout << "Wprowadz liczbe jesli to koniec wprowadzania liczb to napisz 00: " << '\n';
            cin >> liczba;
            iloscliczb++;
        }  
    } while (liczba != 00);

    srednia = suma / iloscliczb;
    cout << "minimalna wartosc to : " << min << '\n';
    cout << "maksymalna wartosc to : " << max << '\n';
    cout << "srednia z liczb to : " << srednia << '\n';


        cout << "koniec";
}
