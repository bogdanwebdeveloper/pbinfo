#include <iostream>
using namespace std;

int main () {
    unsigned n,p,s=0,x,i;
    cin >> n;
    p=n*n;
    x=(n-1)/2;
        for(i=n;i<=n+x;i++) {
            s=s+1;
        }
        for(i=n-1;i>=n-x;i--) {
            s=s+i;
        }
        if(p==s) {
            for(i=n-1;i>=n+x;i--) {
                cout << i << ' ';
            }
        } else {
            cout << "NU ESTE NOROCOS";
        }
    
    return 0;
}
