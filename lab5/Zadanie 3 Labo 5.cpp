#include <iostream>
#include <fstream> 
#include <sstream> 
#include <vector>
using namespace std;
struct Osoba
{
    string Imie;
    int Wiek;
};
//                       strumień z którego będę odczytywac
vector<Osoba> ktostarszy(istream& strumien)// funkcja odczytywująca z plik kolejne struktory osob i zapisująca je do wektora
{
    vector <Osoba> zapisani;
    Osoba ktoras;
    while (strumien >> ktoras.Imie)
        while(strumien>> ktoras.Wiek)
        {
            {
                zapisani.push_back(ktoras);
            }
        }
    return zapisani;
}


int main()
{
    Osoba Pierwsza {"Bogdan", 45};
    Osoba Druga{ "Jadwiga", 68 };
    Osoba Trzecia{ "Dawid", 22 };
    Osoba Czwarta{ "Agnieszka", 19 };
    Osoba Piąta{ "Robert", 4 };
    ofstream plik_z_osobami("osoby i ich wiek");
    if(plik_z_osobami)
    {
        plik_z_osobami << Pierwsza.Imie;
        plik_z_osobami << '\t' << Pierwsza.Wiek << endl;
        plik_z_osobami << Druga.Imie;
        plik_z_osobami << '\t' << Druga.Wiek << endl;
        plik_z_osobami << Trzecia.Imie;
        plik_z_osobami << '\t' << Trzecia.Wiek << endl;
        plik_z_osobami << Czwarta.Imie;
        plik_z_osobami << '\t' << Czwarta.Wiek << endl;
        plik_z_osobami << Piąta.Imie;
        plik_z_osobami << '\t' << Piąta.Wiek << endl;
        
        plik_z_osobami.close();
    }
    ifstream plik_do_odczytu("osoby i ich wiek");
    if (plik_do_odczytu)
    {

    }

}


