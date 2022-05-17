#include <iostream>
using namespace std;
int main()
{
    unsigned n,vmin,vmax,pmin,pmax,i;
    cin>>n;
    unsigned v[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vmin=vmax=v[1];
    pmin=pmax=1;
    for(i=2;i<=n;i++)
    {
        if(v[i]>vmax)
        {
            vmax=v[i];
            pmax=i;
        }
        if(v[i]<vmin)
        {
            vmin=v[i];
            pmin=i;
        }
    }
    if(pmax<pmin)
    {
        unsigned aux=pmax;
        pmax=pmin;
        pmin=aux;
    }
    for(i=pmin;i<=pmax;i++)
        cout<<v[i]<<' ';
    return 0;
}
