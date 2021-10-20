#include <iostream>
using namespace std;
int main()
{
    unsigned n, i, ct=0, r;
    unsigned long long nr;
    cin >> n >> r;
    for(i=1; i<=n; i++)
    {
        cin>>nr;

        if(nr%9==r)
            ct++;
    }
    cout << ct;
    return 0;
}
