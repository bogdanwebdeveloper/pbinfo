#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");

int main ()
{
    int max = 0, aparitii=0, x;
    while (fin >> x)
    {
        if (x==2 && x>max)
        {
            max=x;
            aparitii=0;
        }
        if (x==3 && x>max)
        {
            max=x;
            aparitii=0;
        }
        if (x==5 && x>max)
        {
            max=x;
            aparitii=0;
        }
        if (x==7 && x>max)
        {
            max=x;
            aparitii=0;
        }
        if (x==max)
        {
            aparitii++;
        }
    }
    fout << max << ' ' << aparitii;
        return 0;
    
}
