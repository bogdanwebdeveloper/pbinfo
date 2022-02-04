#include <iostream>
using namespace std;

int main()
{
    unsigned n,i,j,k;
    cin >> n;
    int v[n+1];
    for (i=1;i<=n;i++)
    {
         cin >> v[i];
    }
    for (i=1;i<n;i++) 
    {
        for (j=i+1;j<=n;j++)
        {
            if (v[i]==v[j])
            {
                for (k=j+1;k<=n;k++)
                {
                    v[k-1] = v[k];
                }
                n--;
                j--;
            }
        }
    }
    for (i=1;i<=n;i++)
        cout << v[i] << ' ';
    return 0;
}
