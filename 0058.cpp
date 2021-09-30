#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if(a == b && a == 0)
        cout << -1;
    else{
        while(b){
            int r = a % b;
            a = b;
            b = r;
        }
        cout << a;
    }
    return 0;
}