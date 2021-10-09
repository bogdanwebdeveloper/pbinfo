#include <iostream>
using namespace std;
int main()
{
    unsigned n;
    cin >> n;
    for(int i = n ; i>0; i--)
        {
        if (i % 2 == 1)
        cout << i << ' ';
        }
    return 0;
}
