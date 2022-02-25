//varianta Luca
#include <iostream>
#include <fstream>

using namespace std;
int v[10];

int main()
{
    ifstream fin("cifreord1.in");
    ofstream fout("cifreord1.out");
    int n, aux, linie=0;
    while(fin >> n)
    {
        aux = n;
        if (aux==0) v[0]++;
        while(aux)
        {
            v[aux%10]++;
            aux /= 10;
        }
    }
    for(int i=10; i>=0; i--)
    {
        for(int m=0; m<v[i]; m++)
        {
            if (linie==20)
            {
                fout << '\n';
                linie = 0;
            }
            fout << i << " ";
            linie++;
        }
    }
    fin.close();
    fout.close();
    return 0;
}
