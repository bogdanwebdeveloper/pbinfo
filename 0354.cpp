#include <iostream>
using namespace std;

 int main () {
     int nr, max;
     unsigned i, n;
     cin >> n;
     cin >> nr;
     max = nr;

        for ( i=2 ; i <= n; i++) {
            cin >> nr;
                if (nr > max) {
                    max = nr;
                }
        }
        
    cout << max;
    return 0;
 }
