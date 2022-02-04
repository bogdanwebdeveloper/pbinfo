#include <iostream>

using namespace std;

int main()
{
    int n, ciframax = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        int cifra;
        cin >> cifra;
        while(cifra){
            if((cifra % 10) > ciframax)
                ciframax = cifra%10;
            cifra=cifra/10;
        }
    }
    cout << ciframax + 1;
    return 0;
}
