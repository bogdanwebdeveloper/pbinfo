#include <iostream>
using namespace std;

int main ()
{
    int s=0;
    unsigned n, i;
    cin >> n;
        for (i=1;i<=n;i++)
        {
            if (i%2==1) 
            {
            s=s+i*(i+1);
            } 
            else 
            {
            s=s-i*(i+1);
            }
        }
        cout << "Rezultatul este " << s;
    return 0;
}
