#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nraparitii.in");
ofstream fout("nraparitii.out");
int main()
{
    unsigned n, cnt=0, i;
    fin >> n;
    unsigned int v[n+1];
    for(i=1; i<=n; i++)
        fin >> v[i];
    for(i=1; i<=n; i++)
        if(v[i]==v[n])
            cnt++;
    fout << cnt;
    fin.close();
    fout.close();
    return 0;
}
