#include <iostream>

using namespace std;

int main()
{
    unsigned a, b, cnta=0, cntb=0, x, y, cnt=0;
    cin >> a >> b;
    x=a;
    y=b;
    while(a)
    {
     a/=10;
     cnta++;
    }

    while(b)
    {
        b/=10;
        cntb++;
    }
    if(x==0)
        {
            cnt=1;
            cout << "DA" << endl;
            cout << cnt << endl;
        }
        else
        {
            if(cnta%10!=cntb%10)
            cout << "NU";
            else
            {
                cout << "DA" << endl;
                a=1;
            }
            if(a==1)
            {
                while(x)
                {
                    if(x%10==y%10)
                    {
                        cnt++;
                    }
                    x/=10;
                    y/=10;
                }
        cout << cnt;
            }
        }
    return 0;
}
