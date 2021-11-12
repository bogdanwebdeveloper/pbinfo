#include <iostream>
using namespace std;
int main()
{
    unsigned long n,n2=0,n3=0;
    cin>>n;
    //n2=0;
   // n3=0;
    while(n)
    {
        if(n%10==2)
            n2++;
        else
         n3++;
        n=n/10;

    }
    if(n2>n3)
        cout<<'2';
    else
        if(n3>n2)
          cout<<3;
        else
            cout<<"2 3";

    return 0;
}

