#include <iostream>
using namespace std;
int main()
{
 unsigned long s = 0,n,d;
 cin >> n;
 //d=1;
 for(d=1;d*d<n;d++)
 //while( d*d<n)
 {
     if(n % d == 0)
     {
         if( d%2==1)
           s = s + d ;
        if((n/d)%2==1)
           s=s+n/d;
      }
     //d++;
 }
 if(d%2==1 && d*d==n)
   s = s + d;
 cout << s;
return 0;
}