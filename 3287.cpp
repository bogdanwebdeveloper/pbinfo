#include <fstream>
using namespace std;
ifstream fin("cifrazecmax.in");
ofstream fout("cifrazecmax.out");
unsigned v[10001],x[10001];
int main()
{
    unsigned n=0,i,j,mmax,nr;
    while(fin>>nr)
      v[++n]=nr;
    for(i=1;i<=n;i++)
    {
       nr=0;
       for(j=1;j<i;j++)
         if(v[j]/10%10==v[i]/10%10)
           nr++;
       x[i]=nr;
    }
  
    mmax=x[1];
    for(i=1;i<=n;i++)
      if(x[i]>mmax)
        mmax=x[i];
    for(i=1;i<=n;i++)
      if(x[i]==mmax)
        {
           fout<<i;
           break;
        }

    fin.close();
    fout.close();
    return 0;
}
