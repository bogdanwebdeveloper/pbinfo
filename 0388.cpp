#include <iostream>

using namespace std;

int main()
{
    unsigned n,c,d;
    cin>>n;
    c=0;
    d=1;
    for(d=1;d*d<n;d++)
    {
        if(n%d==0)
        {
            if(d%2==0)
            c=c+1;
            if((n/d)%2==0)
            c=c+1;
        }
    }
    if(d%2==0 && d*d==n)
        c++;
    cout<<c;
    return 0;
}