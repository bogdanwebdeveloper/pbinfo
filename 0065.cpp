#include <iostream>
using namespace std;

int main() {
    unsigned n, p=1, cif, OK=0;
    cin >> n;
        while(n != 0) {
            if( n%2 == 1) {
                cif = n%10;
                p = p * cif;
                OK = 1;
            }
            n = n/10;
        }
            if ( OK == 0 ) {
                cout << "-1";
            } else {
                cout << p;
            }
    return 0;
}