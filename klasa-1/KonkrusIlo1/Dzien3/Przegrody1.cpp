#include <bits/stdc++.h>
using namespace std;

long long n,x,liczbak=1,sumak=0,sumaw=0,przegrody = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        t[i] = x;
        sumaw += x;
        sumak += liczbak;
        liczbak += 1;
        if (sumaw == sumak) przegrody++;
    }
    cout << przegrody;





}


