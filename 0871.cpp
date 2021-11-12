#include <iostream>

using namespace std;

int main()
{
    unsigned int n,x=0,c1,c2,p=1,cif;
    cin>>n>>c1>>c2;
    if(n==c1)
        x=c2;
    else
      while(n)
      {
        cif=n%10;
        if(cif==c1)
          {
            x=x+c2*p;
            p=p*10;
          }
        else
          {
            x=x+cif*p;
            p=p*10;
          }
        
        n=n/10;
      }
    cout<<x;
    return 0;
}
