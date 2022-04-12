#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001];
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    for(int i = 1; i < n; ++i)
        for(int j = i + 1; j <= n; ++j)
            if(a[i] > a[j])
                swap(a[i], a[j]);

    for(int i = 1; i <= n; ++i){
        int cnt = 1, d = 2;
        int ca = a[i];
        while(ca > 1){
            int p = 0;
            while(ca % d == 0)
                ca /= d, p++;
            cnt *= (p + 1);
            d++;
            if(d * d > ca)
                d = ca;
        }
        if(cnt == 2)
            cout << a[i] << ' ';
    }

    return 0;
}
