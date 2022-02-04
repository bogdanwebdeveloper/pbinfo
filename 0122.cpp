#include <iostream>
using namespace std;

int main () {
    unsigned n1 ,n2 , cnt1, cnt2,aux1,aux2;
    cin >> n1 >> n2;
    while (n1==0 & n2==0) 
    {
        if (n1%2==1)
            cnt1++;
        if (n2%2==1)
            cnt2++;
        n1=n1/2;
        n2=n2/2;
    }
    if (n1 > n2) 
    {
        cout << n1;
    } else {
        cout << n2;
    }
}
