#include <iostream>
using namespace std;
int main()
{
    unsigned n,i,k,p=0,q=0,r=0,cnt=0;
    int x;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>x>>k;
   for(i=1;i<=n;i++)
        if(a[i]==x)
   {
           p=i;
           break;
   }
   cout<<p<<'\n';
   for(i=n;i>=1;i--)
     if(a[i]==x)
      {
           q=i;
           break;
    }
   cout<<q<<'\n';
   for(i=1;i<=n;i++)
        if(a[i]==x)
        {
          cnt++;
          if(cnt==k)
          {
            r=i;
            break;
          }
        }
    cout<<r;

    return 0;
}
