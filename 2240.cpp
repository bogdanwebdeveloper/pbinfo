#include <iostream>
using namespace std;

int main () {
    unsigned C, P, G, total;
    cin >> C;
    P = 2*C;
    G = 2*P;
    total = C + P + G;
    cout << total;
    return 0;
}