#include <iostream>
using namespace std;

int main () 
{
    unsigned n,i,j,ok=1;
    cin >> n;
    unsigned v[501];
    for (i=1;i<=n;i++) 
        cin >> v[i];
    for (i=1;i<=n;i++)
    {
        for (j=i+1;j<=n;j++) {
        if(v[i]==v[j]) 
        {
            ok==0;
            break;
        }
    }
}
if (ok==1)
 cout << "DA";
else 
 cout << "NU";
return 0;
}

//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[501];
    for(int i = 1; i <= n; ++i)
        cin >> v[i];

    int toateegale=1;

    for(int i = 2; i <= n; ++i)
        if(v[i] != v[i-1])
            toateegale=0;

    if(toateegale==1)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
