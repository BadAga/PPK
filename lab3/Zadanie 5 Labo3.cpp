#include <iostream>

using namespace std;
int ileLiterekA (string slowo)
{
    int ile = 0;
    for (int i = 0; i < slowo.length(); i++)
    {
        if (slowo[i] == 'a')
        {
            ile++;
        }
    }

    return ile;
}

int main()
{
    cout << "Podaj wyraz: ";
    string wyraz;
    cin >> wyraz;
    cout << endl;
    cout << "w wyrazie jest tyle liter a: " << ileLiterekA(wyraz);
    
    return 0;
    



}

