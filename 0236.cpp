#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sort2.in");
ofstream fout("sort2.out");
int main()
{
  unsigned k=0, i, j, aux, v[101], x,n;
  while(fin>>x)
    if(x>=0 && x<=99)
      v[++k]=x;
   n=k;
  for(i=1;i<n;i++)
    for(j=i+1;j<=n;j++)
      if(v[i]>v[j])
      {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
      }
 if(k==0)
     fout<<"NU EXISTA";
    else
  for(i=1;i<=n;i++)
      fout<<v[i]<<' ';
  fin.close();
  fout.close();
  return 0;
}
