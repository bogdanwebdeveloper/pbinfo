#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned n,i,j;
    cin>>n;
   long int v[2*n+2],x;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<n;i++)
    {

        if((v[i]+v[i+1])%2==0)
        {
            n++;
            x=(v[i]+v[i+1])/2;
            for(j=n;j>i;j--)
                v[j]=v[j-1];
            v[i+1]=x;
            i++;
        }
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";

    return 0;
}
