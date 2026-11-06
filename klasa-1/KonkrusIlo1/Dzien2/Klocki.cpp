#include <bits/stdc++.h>
using namespace std;

long long n,suma=0,ilosc=0,srednia,x1,ruchy=0;

int t[400010];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x1;
        t[i] = x1;
        suma += x1;
        ilosc++;
    }
    if (suma%n!=0) {cout << "NIE"; return 0;}
    srednia = suma/ilosc;
    for (int i = 0; i < n; i++)
    {
        if (t[i] > srednia) ruchy += t[i]-srednia;

    }

    cout << ruchy;


}

