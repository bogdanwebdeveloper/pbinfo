#include <iostream>
using namespace std;
int main()
{
    unsigned long a,b,c=0,p=1,c1,c2;
    cin>>a>>b;
    while(a&&b)
    {
        c1=a%10;
        c2=b%10;
        c=c+(c1+c2)/2*p;
        a=a/10;
        b=b/10;
        p=p*10;
    }

    cout<<c;
    return 0;
}
