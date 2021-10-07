#include <iostream>
using  namespace std;

int main () {
    unsigned n;
    int z, p, c;
    cin >> n;
    z = 0;
    p = 1;

        while (n>0) {
            c = n%10;
            n = n/10;
                if (c%3 == 0){
                    z = z + p*(9-c);
                    p = p*10;
                }
        }
    cout << z;
    return 0;
}