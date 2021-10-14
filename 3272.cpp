#include <iostream>
using namespace std;
int main()
{
    unsigned long n,ogl,d,nr,i=1;
    unsigned long long s=0;
    cin>>n;
    for(i=1;i<=n;i++)
     {
        cin>>nr;
        ogl=0;
        while(nr)
        {
           ogl=ogl*10+nr%10;
           nr=nr/10;
        }
        for(d=1;d*d<=ogl;d++)
         {
            if(ogl%d==0)
              {
               s=s+d;
               if(d*d<ogl)
               s=s+ogl/d;
              }
         }
         if(d*d==ogl)
            s=s+d;
    }


    cout<<s;
    return 0;
  }