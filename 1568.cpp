#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 unsigned long s = 0,n,d,nr=0;
 cin >> n;
 d=1;
 while( d*d<n)
 {
     if(n % d == 0)
     {
         s = s + d + n / d;
         nr=nr+2;
     }
     d++;
 }
 if(d * d == n)
 {
     s = s + d;
     nr++;
 }
 cout <<fixed<<setprecision(2)<<(float) s/nr;
return 0;
}