//punctaj incomplet
#include <iostream>
using namespace std;
int main()
{
    unsigned n,nr,i,max,min,ok=0;
    cin>>n;
    cin>>nr;
    min=nr;
    cin>>nr;
    max=nr;
    for(i=3;i<=n;i++)
    {
        cin>>nr;
        if(i%2==0)
            if(nr>max)
               max=nr;
        else
            if(nr<min&&(nr>9&&nr<100))
              {
                  min=nr;
                 ok=1;
              }
    }
    cout<<max<<' ';
    if(ok==0)
        cout<<"-1";
    else
        cout<<min;
    return 0;
}