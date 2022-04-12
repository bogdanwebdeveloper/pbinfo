#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("puterik.in");
ofstream fout("puterik.out");
int main()
{
  unsigned  k,n,m=0, i,ok, j, nr,aux,v[101];;
  fin>>n>>k;
  for(i=1;i<=n;i++)
 {
    fin>>nr;
    aux=nr;
    ok=1;
    while(aux>1)
     {
        if(aux%k!=0)
        {
           ok=0;
           break;
        }
        aux=aux/k;
     }
      if(nr==0)
          ok=0;
     if(ok==1)
      v[++m]=nr;
 }

    for(i=1;i<m;i++)
      for(j=i+1;j<=m;j++)
       if(v[i]>v[j])
        {
           aux=v[i];
           v[i]=v[j];
           v[j]=aux;

         }
    for(i=1;i<=m;i++)
       fout<<v[i]<<' ';

  fin.close();
  fout.close();
  return 0;
}
