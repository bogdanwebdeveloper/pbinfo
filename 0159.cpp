#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[51];
    for(int i = 1; i <= n; ++i)
        cin >> v[i];
    for(int i = 1; i <= n; ++i)
    {
        int aux= v[i];
        if(aux% 2 == 0)
        {
            n++;
            for(int j = n; j > i+1; j--)
            {
                v[j] = v[j-1];
            }
            v[i+1] = 2 * aux;
            i++;
        }
    }
    for(int i = 1; i <= n; ++i)
        cout << v[i] << " ";
    return 0;
}
