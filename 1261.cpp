#include <iostream>
using namespace std;

int main()
{
    int nr;
    unsigned K=0;
    cin>>nr;
    while(nr!=0)
    {
        if(nr%2==0)
            K++;
        cin>>nr;
    }
    if(K==0)
        cout<<"NU EXISTA";
    else
        cout<<K;
    return 0;
}