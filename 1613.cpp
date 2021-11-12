#include <iostream>
using namespace std;
int main()
{
    unsigned n,n1=0,n2=0,d,p1=1,p2=1;
    cin>>n;
    while(n)
    {
        if(n%2==0)
        {
            n1=n1+(n%10)*p1;
            p1=p1*10;
        }
        else
        {
            n2=n2+(n%10)*p2;
            p2=p2*10;
        }
        n=n/10;
    }
    if(n1>n2)
        d=n1-n2;
    else
        d=n2-n1;
    cout<<d;
    return 0;
}
