#include <iostream>
using namespace std;
int main()
{
 unsigned int n,i,j;
 cin>>n;
 int v[n+1],u[n+1],aux;
 for(i=1;i<=n;i++)
    {
      cin>>v[i];
      u[i]=i;
    }
 for(i=1;i<n;i++)
   for(j=i+1;j<=n;j++)
     if(v[i]>v[j])
      {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
        aux=u[i];
        u[i]=u[j];
        u[j]=aux;
      }
  for(i=1;i<=n;i++)
     cout<<u[i]<<' ';
  return 0;
}
