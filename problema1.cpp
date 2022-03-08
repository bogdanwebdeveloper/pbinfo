//un numar n se numeste rotund daca este par si in reprezentarea sa matematica in baza 2 nu sunt doua cifre egale alaturate
//de ex: 10 este un numar rotund deoarece reprezentarea sa in baza 2 este 1010
//18 nu este rotund deoarece reprezentat in baza 2 este 10010

#include <iostream>
using namespace std;
int main()
{
    int aux, nr, rezultat = 0, putere = 1;
    int cifra = rezultat % 10, contor= 1;
    cin >> nr;
    while(nr != 0)
    {
        int rest = nr % 2;
        rezultat = rezultat + rest * putere;
        putere = putere*10;
        nr = nr/2;
    }

    if (nr%2==0)
    {
        while (rezultat!=0)
        {
             if (rezultat % 10 == rezultat/10%10)
            {
                cout << "Nu este rotund";
                return 0;
            } 
            rezultat = rezultat / 10;
        }
        cout << "Este rotund";
    }
    else
    {
        cout << "Nu este rotund";
    }
    return 0;
}
