#include <iostream>
using namespace std;
int main()
{
   unsigned n,i,ok=0;
   cin>>n;
   unsigned v[n+1];
   for(i=1;i<=n;i++)
        cin>>v[i];
   for(i=1;i<=n;i++)
    if(v[i]%2==1)
       {
           ok=1;
           break;
       }
   if(ok==0)
        cout<<"NU";
   else
        cout<<"DA";
    return 0;
}
