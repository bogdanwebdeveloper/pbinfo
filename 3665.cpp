#include <iostream>

using namespace std;

int main(){

unsigned n,max=10;
   cin >> n;
   if(n==0) max=0;
   while(n){
       if(max==10){
        if(n%2==0)
            max=n%10;
       }
       else {
        if(n%10>max && n%2==0) 
            max = n%10;
       }
       n=n/10;
   }
   cout << max;
}