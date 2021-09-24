#include <iostream>
using namespace std;

int main () {
    unsigned G, O, C, P;
    cin >> G >> O;
    C = G*1 + O*1;
    P = G*2 + O*4;
    cout << C << ' ' << P;
    return 0;
}