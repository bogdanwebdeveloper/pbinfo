#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ifstream fin("BAC.TXT");
    unsigned n,i, nrmax;
    int nr;
    int v[202]={0};
    while (fin >> nr)
    {
        v[nr+99]++;
    }
    nrmax = v[0];
    for (i=0;i<=198;i++)
    {
        if (v[i]>nrmax)
            nrmax=v[i];
    }
    for (i=0;i<=198;i++)
    {
        if (v[i]==nrmax)
            cout << i-99 << ' ';
    }
 return 0;
}
