#include <iostream>
using namespace std;
  int main () 
  {
      unsigned n,i,j;
      cin >> n;
      unsigned v[n+1];
        for (i=1;i<=n;i++)
        {
            cin >> v[i];
        }
        for (j=1;j<n;j++)
        {
            if(v[j]%2==0) 
            {
                for (i=j;i<n;i++)
                    v[i]=v[i+1];
                n--;
                j--;
            }
        }
        if(v[n]%2==0) 
            n--;
        for (i=1;i<=n;i++)
            cout << v[i] << ' ';
      return 0;
  }
