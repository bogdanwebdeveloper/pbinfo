#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("2prim.in");
    ofstream fout("2prim.out");
    unsigned  n,nr,i,d,ok, cnt=0;
    fin>>n;
    for(i=1;i<=n;i++)
    {
        ok=1;
        fin>>nr;
        nr=nr%100;
        if(nr==0 || nr==1 ||nr%2==0)
           ok=0;
       if(nr==2)
        ok=1;
       else
         for(d=3;d*d<=nr;d+=2)
           if(nr%d==0)
            {
               ok=0;
               break;
             }
      if(ok)
        cnt++;
    }

    fout<<cnt;
    fin.close();
    fout.close();
    return 0;
}
