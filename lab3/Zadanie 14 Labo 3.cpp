#include <iostream>
#include <vector>
using namespace std;
int funkcja14(vector<int> vec)
{
    int min = numeric_limits<int>::max(); //ustawienie minimum na max liczbę, którą przyjmuje int
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] < min)
        {
            min = vec[i];
        }
    }
    return min;
}

int main()
{
    vector <int> wektorzmaina{ 0,4,5,2,6,7,8,44,5,6,-34,-55,7 };
    cout<< funkcja14(wektorzmaina);
}

