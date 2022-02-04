#include <iostream>
using namespace std;
  int main () 
  {
      unsigned n,i,p;
      cin >> n >> p;
      int v[n+1];
        for (i=1;i<=n;i++)
        {
            cin >> v[i];
        }
        for (i=p;i<n;i++)
        {
            v[i] = v[i+1];
        }
        n--;
        for (i=1;i<=n;i++)
        {
            cout << v[i] << ' ';
        }
      return 0;
  }
