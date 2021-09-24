#include <iostream>
using namespace std;

int main () {
    unsigned n, pasari, cuiburi, arbori, crengi;
    cin >> n;
    arbori = n*n;
    crengi = arbori*n;
    cuiburi = crengi*n;
    pasari = cuiburi*n;
    cout << pasari;
    return 0;
}