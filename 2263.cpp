#include <iostream>
using namespace std;

int main () {
    unsigned t1, t2, n, m, z, tip1, tip2;
    cin >> t1 >> t2 >> n >> m >> z;
    tip1 = t1 * z;
    tip2 = t2 * z;
    cout << tip1 * n + tip2 * m;
}