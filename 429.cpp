#include <iostream>
using namespace std;

int main () 
{
    unsigned n,cnt0=0,cnt1=0;
    cin >> n;
    while (n) 
    {
        if (n%2==1) {
            cnt1++;
        } else {
            cnt0++;
        }
        n=n/2;
    }
    cout << cnt0 << cnt0;
    return 0;
}
