#include <iostream>
using namespace std;

int main()
{
    unsigned n, K=0;
    cin >> n;
        if ( n < 10)
        {
            cout << '1';
        } else {
        while(n != 0) 
        {
           K++;
           n = n/10;
        }
         cout << K;
        }
    return 0;
}