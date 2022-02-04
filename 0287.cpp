#include <iostream>
using namespace std;

int main ()
{
    unsigned n,j,m,i,ok;
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> m;
        int v[m+1];
        for (j=1;j<=m;j++) 
        {
            cin >> v[j];
        }
        ok=1;
        for (j=1;j<m;j++)
        {
            if (v[j] > v[j+1])
            {
                ok=0;
                break;
            }
        }
        if (ok==1) 
            cout << 1 << ' ';
        else 
            cout << 0 << ' ';
    }
    return 0;
}
