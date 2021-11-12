#include <iostream>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    while(n>99)//while(n>=100)
    {
        n=n/10;
    }
    
    cout<<(n/10)*(n%10);
    return 0;
}
