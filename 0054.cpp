#include <iostream>
using namespace std;

 int main () {
     int nr, max;
     unsigned i, n;
     cin >> n;
     cin >> nr;
     max = nr;

        while (n>0) {
            cin >> nr;
                if (nr > max) {
                    max = nr;
                }
        }
        
    cout << max;
    return 0;
 }
