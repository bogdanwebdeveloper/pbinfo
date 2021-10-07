#include <iostream>
using namespace std;

int main()
{
    unsigned n, p=1, k, cif, OK=0;
    cin >> n >> k;
        while(n != 0) 
        {
            cif = n%10;
            if( cif != k ) 
            {
                p = p * cif;
                OK = 1;
            }
            n = n/10;
        }
        if (OK == 0) {
            cout << "0";
        } else {
            cout << p;
        }
    return 0;
}