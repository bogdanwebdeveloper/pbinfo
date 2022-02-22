#include <iostream>
using namespace std;
unsigned v[11];
int main()
{
    unsigned n,i,j,nr,cif,aux;
    cin>>n;
    unsigned fr[11];
    for(i=0;i<=9;i++)
        fr[i]=i;
    for(i=1;i<=n;i++)
    {
       cin>>nr;
       if(nr==0)
        v[0]++;
       else
       while(nr)
       {
           cif=nr%10;
           v[cif]++;
           nr=nr/10;
       }

    }
    for(i=0;i<9;i++)
       for(j=i+1;j<=9;j++)
       {
        if(v[i]==v[j])
           {
               if(fr[i]>fr[j])
               {

                aux=fr[i];
               fr[i]=fr[j];
              fr[j]=aux;
              }
        }
         if(v[i]>v[j])
         {
           aux=v[i];
           v[i]=v[j];
           v[j]=aux;
           aux=fr[i];
           fr[i]=fr[j];
           fr[j]=aux;
         }
       }

       for(i=0;i<=9;i++)
        if(v[i]>0)
         cout<<fr[i]<<' ';
    return 0;
}
