#include <iostream>
using namespace std;

 int main () {
     int nr, max, min, S;
     unsigned i, n;
     cin >> n;
     cin >> nr;
     max = nr;
     min = nr;

        for ( i=2 ; i <= n; i++) {
            cin >> nr;
                if (nr > max) {
                    max = nr;
                }
                if (nr < min) {
                    min = nr;
                }
        }

          S = max + min;
        
    cout << S;
    return 0;
 }
