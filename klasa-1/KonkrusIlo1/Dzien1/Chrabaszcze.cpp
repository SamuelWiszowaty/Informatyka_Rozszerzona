#include <iostream>
using namespace std;

long long min1 = 0;
long long n,wynik;
long long a,b,liczba1,liczba2;

long long ro(long long a, long long b)
{
        liczba1 +=a;
        liczba2+=b;

    if((liczba1) - (liczba2)> 0)
    {

        return (liczba1) - (liczba2);

    }
    else
    {
        return (liczba2) - (liczba1);
    }




}

int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> liczba1 >> liczba2;
    if(liczba1 - liczba2 > 0) min1 = liczba1 - liczba2;
    else min1 = liczba2 - liczba1;

    for (long long i = 0; i < n; i++)
    {
         cin >> a >>b;
         wynik = ro(a,b);
         if (min1 > wynik)
         {
             min1 = wynik;
         }
    }
    cout << min1;
}
