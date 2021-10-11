#include <iostream>
using namespace std;

int main ()
{
    long unsigned n, S=0,i;
    cin >> n;
        for (i=1;i<=n;i++) 
        {
            if (n%1==0) {
                S = S + i;
            }
        }
    S = S + n;
    cout << S;
    return 0;
}

// o alta rezolvare ar putea fi:

#include <iostream>
using namespace std;
int main2 () 
{
    long unsigned n, S=0, i;
    cin >> n;
    for (i=1;i*i<=n;i++) 
    {
        if (n%i==0){
            S = S+i;
            if (i*i < n){
                S= S + n/i;
            }
        }
    }
    cout << S;
    return 0;
}