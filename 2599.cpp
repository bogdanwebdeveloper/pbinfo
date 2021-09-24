#include <iostream>
using namespace std;
 
int main () {
    long long a;
    cin >> a;
    if ( a == 0) {
        cout << '0';
    } else if ( a == 1) {
        cout << '1';
    } else {
        a = a*a;
         a = a*a;
          a = a*a;
           a = a*a;
        cout << a;
    }
    
}