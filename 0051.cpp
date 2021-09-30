#include <iostream>
using namespace std;

int main()
{
    int nr, S=0;
    cin>>nr;
    while(nr!=0)
    {
        S = S+nr;
        cin >> nr;
    }
        cout<< S;
    return 0;
}