// 90/100 pbinfo raspuns gresit
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("nrapprime.in");
    ofstream fout("nrapprime.out");
    int long long n,cnt=0,i,ok,d;
    fin>>n;
    int v[n+1];
    for( i=1;i<=n;i++)
        fin>>v[i];
    for( i=1;i<=n;i++)
    {
        ok=1;
        for(d=2;d*d<=v[i];d++)
            if(v[i]%d==0)
            {
                ok=0;
                break;
            }
        if(v[i]==1)
            ok=0;
         if(ok==1)
                cnt++;
    }

    fout<<cnt;
    return 0;
}
