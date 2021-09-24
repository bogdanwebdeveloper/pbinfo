#include <iostream>
using namespace std;

int main () {
    unsigned n, m, I;
    cin >> n >> m;
    if (m % n == 0) {
        I = m/n;
        cout << I;
    }
    return 0;
}