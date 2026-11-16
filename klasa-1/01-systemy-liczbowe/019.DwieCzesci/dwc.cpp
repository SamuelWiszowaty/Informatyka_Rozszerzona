#include <bits/stdc++.h>
using namespace std;

long long n,a,b,x=0,suma;


int main()
{
    cin >> n;
    long long t[n];
    if (n < 3) {
        cout << "NIE";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (i > 0 && i != n) {
            t[i] = a;
        }
        x++;
    }
    sort (t + 1 , t+n-1);
    cout << t[1];
}
