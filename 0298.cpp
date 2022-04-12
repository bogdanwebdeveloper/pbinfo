#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream fin("sumsec.in");
   ofstream fout("sumsec.out");
   unsigned long long n, i, s=0, ok, d, p1=0, p2=0;
   fin>>n;
   unsigned v[n+1];
   for(i=1;i<=n;i++)
    fin>>v[i];
   for(i=1;i<=n;i++)
   {
       ok=1;
       for(d=2;d*d<=v[i];d++)
        if(v[i]%d==0)
            ok=0;
           if(v[i]==1||v[i]==0)
           ok=0;
        if(ok==1)
        {
            p1=i;
            break;
        }
   }
    for(i=n;i>=1;i--)
   {
       ok=1;

       for(d=2;d*d<=v[i];d++)
        if(v[i]%d==0)
            ok=0;
       if(v[i]==1||v[i]==0)
            ok=0;
        if(ok==1)
        {
            p2=i;
            break;
        }
   }
   for(i=p1;i<=p2;i++)
    s=s+v[i];
   fout<<s;
     fin.close();
    fout.close();
    return 0;

}
