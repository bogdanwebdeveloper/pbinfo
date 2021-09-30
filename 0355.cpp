#include <iostream>
using namespace std;

int main() {
    unsigned i, n;
    int nr, min;
    cin >> n;
    cin >> nr;
    min = nr;

        for (i=2 ; i <= n; i++) {
            cin >> nr;
            if ( nr < min) {
                min = nr;
            }
        }
    cout << min;
    return 0;
}