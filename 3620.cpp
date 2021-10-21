#include <iostream>
using namespace std;

int main () 
{
    unsigned long n;
    unsigned k,ok=1;
    cin >> n >> k;
    while (n) 
    {
        if (n%10>k) 
        {
            ok = 0;
            break;
        }
        n = n/10;
    }
    if (ok)
        cout << "DA";
        else 
        cout << "NU";
        return 0;
}
