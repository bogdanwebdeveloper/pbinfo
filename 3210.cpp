#include <iostream>
using namespace std;

int main () {
    unsigned B, S, C, P, r;
    cin >> B >> S;
    C = S/B;
    r = S%B;
    P = B-r;
    cout << C << ' ' << P;
}