#include <iostream>
using namespace std;
unsigned v[11];
int main()
{
    unsigned n,i,nr,cif,s=0;
    cin>>n;
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
    for(i=1;i<=9;i++)
       {

           s=s+v[i]*i*i*i;
       }
       cout<<s;
    return 0;
}
