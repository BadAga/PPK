#include <iostream>
#include <string>
using namespace std;

string wspak(string lancuchznakowy)
{
    for (size_t i=0; i<lancuchznakowy.length()/2; i++)
    {
        swap(lancuchznakowy[i], lancuchznakowy[lancuchznakowy.length() - i - 1]);
    }
    return lancuchznakowy;
}

int main()
{
    string tekst= "U mnie jodly w lesie nie szumia, bo moj las jest ze swierkow.";
    
    cout << endl << wspak(tekst);
    
}

