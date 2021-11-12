//varianta lui Matei
#include <iostream>
using namespace std;
int main()
{
    unsigned long long n,cif,aux,s=0,r=0;
    cin>>n;
    aux=n;
    while(aux)
    {
        cif=aux%10;
        s+=cif;
        aux/=10;
    }
    while(n)
    {
        cif=n%10;
        if((s-cif)%3==0) r++;
        n/=10;
    }
    cout<<r;
    return 0;
}
