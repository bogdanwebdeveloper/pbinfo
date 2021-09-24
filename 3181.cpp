#include <iostream>
using namespace std;

int main (){
    unsigned x, y, n, a, z, h;
    cin >> x >> y >> n;
    a = n/(x*y);
    z = (n-a*y*x) / y;
    h = n-a*x*y-z*y;
    cout << a << endl << z <<endl << h;
    return 0;

}