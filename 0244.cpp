#include <fstream>
using namespace std;
unsigned v[11];
int main()
{
    ifstream fin("cifreord.in");
    ofstream fout("cifreord.out");
    unsigned nr,i,j,n;
    fin>>n;
    for(i=1;i<=n;i++)
    {
          fin>>nr;
          v[nr]++;
    }
    nr=0;
    for(i=0;i<=9;i++)
     if(v[i])
         for(j=1;j<=v[i];j++)
          {
              nr++;
              if(nr%20!=0)
                fout<<i<<' ';
              else
                  fout<<i<<endl; 
          }
    fin.close();
    fout.close();
    return 0;
}
