#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i =2 ; i<=(n*2)+1 ; i++ ){
        if (i % 2 == 0)
        cout << i << ' ';
        }
    return 0;
}
