#include <iostream>
using namespace std;
unsigned v[1000];
int main()
{
    unsigned n,i,nr,a,b,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
            cin>>nr;
            if(nr>=100&&nr<=999)
                v[nr]++;
    }

    nr=0;
    for(i=999;i>=100;i--)
     {
            if(v[i]==0)
            {
                k++;
               if(k==1)
                 b=i;

               else
                 if(k==2)
                   a=i;
                 else
                 if(k>2)
                   break;
            }
     }

     if(k==0||k==1)
        cout<<"NU EXISTA";
     else
        cout<<a<<' '<<b;
    return 0;
}
