#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0;
    while (n)
    {
        if ((n%10) > max)
        max = n % 10;
        n/=10;
    }
        cout << max;
    return 0;
}