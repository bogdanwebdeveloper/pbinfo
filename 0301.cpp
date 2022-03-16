//VARIANTA MIHNEA
#include <iostream>
#include <fstream>
using namespace std;
unsigned v[101];
int main()
{
    ifstream fin("frecventa1.in");
    ofstream fout("frecventa1.out");
    unsigned n,i,nr,MAX=0,j;
    fin>>n;
    for(i=1;i<=n;i++)
    {
        fin>>nr;
        v[nr]++;
        if(v[nr]>MAX)
            MAX=v[nr];
    }
    for(i=MAX;i>0;i--)
    {
       for(j=0;j<100;j++)
        if(v[j]==i)
        fout<<j<<" ";
    }

    return 0;
}

// VARIANTA DIRIGINTA
#include <fstream>
using namespace std;
ifstream fin("frecventa1.in");
ofstream fout("frecventa1.out");
int main()
{
    unsigned n,i,j,nr,v[101]={0},fr[101];
    fin>>n;
    for(i=0;i<=99;i++)
      fr[i]=i;
    for(i=1;i<=n;i++)
    {
       fin>>nr;
       v[nr]++;
    }
    for(i=0;i<99;i++)
     for(j=i+1;j<=99;j++)
      {
         if(v[i]==v[j])
           if(fr[i]>fr[j])
            {
              nr=fr[i];
              fr[i]=fr[j];
              fr[j]=nr;
            }
      if(v[i]<v[j])
      {
       nr=v[i];
       v[i]=v[j];
       v[j]=nr;
       nr=fr[i];
       fr[i]=fr[j];
       fr[j]=nr;
      }}
   for(i=0;i<=99;i++)
    if(v[i])
      fout<<fr[i]<<' ';
   fin.close();
   fout.close();
    return 0;
}
