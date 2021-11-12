#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    ifstream fin("toate.in");
    ofstream fout("toate.out");
    unsigned int n,nr,x,p,i,cif,nrmax=0;
    fin>>n;
    for(i=1;i<=n;i++)
    {
        fin>>nr;
        x=0;
        p=1;
        while(nr)
        {
            cif=nr%10;
            if(cif!=9)
            {
              x=x+cif*p;
              p=p*10;
            }
            nr=nr/10;
        }
        if(x>nrmax)
            nrmax=x;
    }
    fout<<nrmax;
    fin.close();
    fout.close();
    return 0;
}
