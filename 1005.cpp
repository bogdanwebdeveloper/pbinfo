#include <iostream>
#include <fstream>
using namespace std;
unsigned v[10000];

ifstream fin("numere8.in");
ofstream fout("numere8.out");

int main ()
{
    unsigned nr, i;
    while(fin >> nr) {
        if (nr <= 9999)
            v[nr]++;
    }
    for (i=9999;i>=1;i--)
    {
        if (v[i]==0)
            fout << i << ' ';
    }
    return 0;
}
