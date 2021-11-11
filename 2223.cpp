#include <iostream>
using namespace std;

int main () {
    unsigned n, suma=0, c, r;
    int i;
    cin >> n;
    while (n) {
        suma = suma + n%10;
        n = n/10;
    }
    if (suma>=1 && suma<=9) {
        cout << suma;
        for (i=1;i<=suma-1;i++) {
            cout << 0;
        } 
    } else {
        c=suma/9;
        r=suma%9;
            for (i=1;i<=c;i++) {
                cout << 9;
            }
        cout << r;
            for (i=1;i<=suma-(c+1);i++) {
                cout << 0;
            }
    }
    }
