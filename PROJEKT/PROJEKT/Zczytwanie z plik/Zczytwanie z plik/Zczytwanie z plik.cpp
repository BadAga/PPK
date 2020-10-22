#include <iostream>
#include <fstream> 
#include <sstream> 
#include <vector>


using namespace std;

int main()
{
    ifstream plikzgrafem;
    plikzgrafem.open("przykladowygraf.txt", ios::in);
    if (plikzgrafem.good()==false)
    {
        cout << "Pilk nie istnieje";
        return 0;
    }
    else
    {
        string linia;
        while (getline(plikzgrafem,linia))
        {
            //cout << linia << endl;
            stringstream ss;
            ss << linia;
            int nr_wiercholka;
            while (ss >> nr_wiercholka) //nie pomija pustych wierszy
            {
                cout << nr_wiercholka << '\t';
            }
            cout << endl;
        }
    }
   
    return 0;
}

