#define _USE_MATH_DEFINES
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>


using namespace std;
struct punkt
{
    double x; //współrzędna x
    double y; // współrzędna y
};
struct prostokat //przy zalożeniu, że boki prostokąta są równoległe do osi x i y
{
    double LGx;
    double LGy;
    double PDx;
    double PDy;
};
struct okrag
{
    double srodekX;
    double srodekY;
    double dlugoscPromienia; //zawsze dod
};
struct zespolona
{
    double Re;
    double Im;
};
struct wektor
{
    double ux; //przesuniecie w osi x i y
    double uy;
    
};
struct czas
{
    int godzina;
    int minuta;
    int sekunda;
};
double odleglosc(punkt pierwszy, punkt drugi)
{
    double wynik = sqrt((drugi.x - pierwszy.x) * (drugi.x - pierwszy.x) + (drugi.y - pierwszy.y) * (drugi.y - pierwszy.y));
    return wynik;
}
double poleprostokata(prostokat p)
{
    double wynik = sqrt((p.PDx - p.LGx) * (p.PDx - p.LGx)) * sqrt((p.LGy - p.PDy) * (p.LGy - p.PDy));
    return wynik;
}
prostokat ktoryWiekszy(prostokat pierwszy, prostokat drugi)
{
    if (poleprostokata(pierwszy) > poleprostokata(drugi))
    {
        return pierwszy;
    }
    else
    {
        return drugi;
    }
}
double poleKola(okrag Okragly)
{
    double wynik = M_PI* Okragly.dlugoscPromienia * Okragly.dlugoscPromienia; 
    return wynik;
}
enum class WzajemnePolozenie { stycznewew, stycznezew, rozlacznewew, rozlacznezew, wspolsrodkowe, przecinajace };
WzajemnePolozenie funkcjapodajaca(okrag pierwszy,okrag drugi)
{
    double odlegloscsrodkow= sqrt((drugi.srodekX - pierwszy.srodekX) * (drugi.srodekX - pierwszy.srodekX) + (drugi.srodekY - pierwszy.srodekY) * (drugi.srodekY - pierwszy.srodekY));
    double roznicapromieni= sqrt((pierwszy.dlugoscPromienia-drugi.dlugoscPromienia)* (pierwszy.dlugoscPromienia - drugi.dlugoscPromienia));
    double sumapromieni= pierwszy.dlugoscPromienia+drugi.dlugoscPromienia; //nie musi byc wartosc bezwzgledna bo suma promieni jest zawsze dod
    if (odlegloscsrodkow == roznicapromieni)
    {
        return WzajemnePolozenie::stycznewew;
    }
    else if (odlegloscsrodkow == sumapromieni)
    {
        return WzajemnePolozenie::stycznezew;
    }
    else if (odlegloscsrodkow < roznicapromieni)
    {
        return WzajemnePolozenie::rozlacznewew;
    }
    else if (odlegloscsrodkow > sumapromieni)
    {
        return WzajemnePolozenie::rozlacznezew;
    }
    else if (pierwszy.srodekX == drugi.srodekX && pierwszy.srodekY == drugi.srodekY)
    {
        return WzajemnePolozenie::wspolsrodkowe;
    }
    else if (roznicapromieni < odlegloscsrodkow && odlegloscsrodkow < sumapromieni)
    {
        return WzajemnePolozenie::przecinajace;
    }
}
zespolona sumaliczb(zespolona pierwsza, zespolona druga)
{
    zespolona sumaz{ pierwsza.Re + druga.Re ,pierwsza.Im + druga.Im };
    return sumaz;
}
zespolona roznicaliczb(zespolona pierwsza, zespolona druga)
{
    zespolona roznicaz{ pierwsza.Re - druga.Re ,pierwsza.Im - druga.Im };
    return roznicaz;
}
zespolona iloczynliczb(zespolona pierwsza, zespolona druga)
{
    zespolona iloczynz{ (pierwsza.Re * druga.Re) - (pierwsza.Im * druga.Im) ,(pierwsza.Re * druga.Im) + (pierwsza.Im * druga.Re) };
    return iloczynz;
}
zespolona ilorazliczb(zespolona pierwsza, zespolona druga)
{
    zespolona ilorazz{ ((pierwsza.Re * druga.Re) + (pierwsza.Im * druga.Im)) / (druga.Re * druga.Re + druga.Im * druga.Im) ,((pierwsza.Im * druga.Re) - (pierwsza.Re * druga.Im)) / (druga.Re * druga.Re + druga.Im * druga.Im) };
    return ilorazz;
}
zespolona potegaliczbyzespolonej(zespolona liczba, int wykladnik)
{
    zespolona Przechowalnia = liczba;
    for (int i = 1; i < wykladnik; i++)
    {
        Przechowalnia = iloczynliczb(Przechowalnia, liczba);
    }
    return Przechowalnia;
}
double wyznaczanie_kata_z_zespolonej(zespolona liczba)
{
    double r = sqrt((liczba.Re * liczba.Re) + (liczba.Im * liczba.Im));
    double phi= acos(liczba.Re/r )*180.0 / M_PI;
    return phi;
}
double modul(zespolona liczba)
{
    double modul_z_zespolonej = sqrt((liczba.Re * liczba.Re) + (liczba.Im * liczba.Im));
    return modul_z_zespolonej;
}
wektor dodawanie(wektor wpierwszy,wektor wdrugi)
{
    wektor dodanyWektor {(wpierwszy.ux + wdrugi.ux), (wdrugi.uy + wpierwszy.uy)};
    return dodanyWektor;
}
wektor odejmowanie(wektor wpierwszy, wektor wdrugi)
{
    wektor odjetyWektor {(wpierwszy.ux - wdrugi.ux), (wpierwszy.uy - wdrugi.uy)};
    return odjetyWektor;
}
double iloczynSkalarnyWektorow(wektor wpierwszy, wektor wdrugi)
{
    double wynikIloczynuSklarnego = wpierwszy.ux * wdrugi.ux + wpierwszy.uy * wdrugi.uy;
    return wynikIloczynuSklarnego;
}
wektor skalowanieWektora(wektor przykladowy, double skala)
{
    wektor przeskalowany{ skala * przykladowy.ux,skala * przykladowy.uy };
    return przeskalowany;
}
czas dodawanaieCzasu(czas pierwszy, czas drugi)
{
   
    czas sumaCzasu = { pierwszy.godzina + drugi.godzina, pierwszy.minuta + drugi.minuta , pierwszy.sekunda + drugi.sekunda };
    sumaCzasu.minuta += sumaCzasu.sekunda / 60;
    sumaCzasu.sekunda = sumaCzasu.sekunda % 60;
    sumaCzasu.godzina += sumaCzasu.minuta / 60;
    sumaCzasu.minuta = sumaCzasu.minuta % 60;
    return sumaCzasu;
}
czas odejmowanieCzasu(czas pierwszy, czas drugi)
{
    pierwszy.sekunda = pierwszy.godzina * 360 + pierwszy.minuta * 60 + pierwszy.sekunda;
    drugi.sekunda = drugi.godzina * 360 + drugi.minuta * 60 + drugi.sekunda;
    czas roznicaCzasu{ 0,0, pierwszy.sekunda - drugi.sekunda };
    roznicaCzasu.minuta += roznicaCzasu.sekunda / 60;
    roznicaCzasu.sekunda = roznicaCzasu.sekunda % 60;
    roznicaCzasu.godzina += roznicaCzasu.minuta / 60;
    roznicaCzasu.minuta = roznicaCzasu.minuta % 60;
    return roznicaCzasu;
}
czas sumujacaWektorCzasow(vector<czas> pierwszy)
{
    czas sumaWektorow{ 0,0,0 };
    for (auto element : pierwszy)
    {
        sumaWektorow=dodawanaieCzasu(sumaWektorow, element);
        
     }
    return sumaWektorow;
}

int main()
{
    punkt Punkcik1{ 4.5, 5.6 };
    punkt Punkcik2{ 7.0, 15.3 };
    cout << "odleglosc miedzy pkt: "<<odleglosc(Punkcik1, Punkcik2) << endl;
    prostokat Prostokacik1{ 2, 19.6, 7.8, 1.2 };
    prostokat Prostokacik2{ 1, 20.6, 17.8, 0.2 };
    cout << "pole prostokata1 : " << poleprostokata(Prostokacik1) << " pole prostokata2 : " << poleprostokata(Prostokacik2)<<endl;
    okrag kolko1 {4, 5.6, 12};
    okrag kolko2 {1, 3.4, 7.7};
    cout << "pole kola1 : " << poleKola(kolko1) << endl;
    //WzajemnePolozenie (kolko1, kolko2);
    zespolona liczba{ 13.98,7 };
    zespolona liczba{ 2,15.6 };
    wektor wektorek1{ 3, 9.9, };
    wektor wektorek2{ -8, 1.9,};
    double skalaKtoraBedziemySkalowacNaszeWektorki = 6;
    vector<czas> pierwszyWektorCzas;
    vector<czas> drugiWektorCzas;
    



}

