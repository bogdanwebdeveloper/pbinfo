#include <iostream>
using namespace std;

int main () {
    unsigned n,i,s=0;
    cin >> n;
        for (i=1;i<=n;i++) {
            s=s+i*(i+1);
        }
        cout << "Rezultatul este " << s;
    return 0;
}
