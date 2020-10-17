#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
vector<int> funkcja12(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        int losowa = rand();
        vec[i] = losowa;

    }
    return vec;

}


int main()
{
    srand(time(NULL));
    vector<int> wektorzmaina(16, 0);// (wielkość, wartość domyślna na każdej pozycji)
    for (auto element: funkcja12(wektorzmaina))
    {
        cout << element << " ";
    }
    
}

