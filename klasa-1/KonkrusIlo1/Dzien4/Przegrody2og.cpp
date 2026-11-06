#include <bits/stdc++.h>
using namespace std;

long long n,a,b,sumaw=0,przegrody = 0,sumaa=0,sumab=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int ta[n];
    int tb[n];
    for (int i = 0; i < n; i++)
    {
        sumaw = 0;
        cin >> a >> b;
        ta[i] = a;
        tb[i] = b;
        sumaa += a;
        sumab+= b;
        if (sumaa == sumab) przegrody++;
    }
    cout << przegrody;





}


