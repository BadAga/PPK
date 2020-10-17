#include <iostream>
#include <vector>
using namespace std;
vector <int> sortujaca(vector<int> vec) // sortuje bąbelkowo
{
    
        for (int i = 0; i < (vec.size() - 1); i++) // nr ostatniego indeksu = długośc-1
        {
            for (int j = 0; j < (vec.size() - 1); j++)
            {
                if (vec[j] > vec[j + 1])
                {
                    int przechowalnia = vec[j];
                    vec[j] = vec[j + 1];
                    vec[j + 1] = przechowalnia;
                }
            }
        }
    
    return vec;
}

int main()
{
    vector<int> wektorzmaina{ 2,44,56,32,4,9,0,65,-455,-22,546,34,66,7,5,4,3,55,-999,-678,456 };
    sortujaca;
    for (auto element : sortujaca(wektorzmaina)) // chcemy wypisać zmienionego wektora,a nie wektora z maina, który nnie jest posortowany
    {
        cout << element << " ";
    }
}