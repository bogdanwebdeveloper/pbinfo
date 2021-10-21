#include <iostream>
using namespace std;

int main () {
    unsigned n,i,cifmax,cnt=0;
    unsigned long nr;
    cin>>n;
    for (i=1; i<=n ; i++)
    {
        cin >> nr;
        cifmax = nr%10;
        nr = nr/10;
        while (nr) 
        {
                if (nr%10>cifmax)
                    cifmax = nr;
                    nr = nr/10;
        }
        if (cifmax%2==1) 
            cnt++;
    }
    cout << cnt;
    return 0;
}
