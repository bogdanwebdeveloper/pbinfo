#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int impar=0;
    int max=0;
    while (n)
    {
        if ((n%10)%2==1 && n%10>max)
        {
            max=n%10;
            impar++;
        }
        n/=10;
    }
    if (impar==0)
        cout << "nu exista";
    else
        cout << max;
    return 0;
}