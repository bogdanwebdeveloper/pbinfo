#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("maxcif.in");
ofstream fout("maxcif.out");
int v[11];
int main ()
{
    int x;
    int max=0;    
    while (fin >> x)
    {
      v[x]++;
    }
    for(int i=1;i<10;i++)
        if(v[i]>max)
        {
            max=v[i];            
        }
    for(int i=1;i<10;i++)
      if(v[i]==max)
      fout<<i<< ' ';
    return 0;
}
