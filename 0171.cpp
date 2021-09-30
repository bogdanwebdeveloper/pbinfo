#include <iostream>
using namespace std;
int main()
{
    unsigned nr,n,cifmin,i,aux,nrcifmin;
    cin>>n;
    cin>>nr;
    aux=nr;

            while(aux>9) {
                aux=aux/10;
            }

    cifmin=aux;
    nrcifmin=nr;
            for(i=2;i<=n;i++) {
                cin>>nr;
                aux=nr;
                    while(aux>9) {
                        aux=aux/10;
                    }
                    if(aux<cifmin) {
                        cifmin=aux;
                        nrcifmin=nr;
                    } else if(aux==cifmin && nrcifmin<nr)
                        nrcifmin=nr;
                    }
     cout<<nrcifmin;
    return 0;
}