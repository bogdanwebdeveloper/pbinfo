#include <iostream>
using namespace std;
unsigned v[101];
int main ()
{
    unsigned n, nr, cnt=0, i;
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> nr;
        v[nr]++;
    }
    for (i=1;i<=100;i++)
    {
        if (v[i]!=0) 
        {
            cnt = cnt + v[i]/2;
        }
    }
    cout << cnt;
    return 0;
}
