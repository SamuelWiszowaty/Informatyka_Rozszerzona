#include <bits/stdc++.h>
using namespace std;

long long n,p0=-1,p1=-1,o0=-1,o1=-1,x;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<long long> t(n);
    for (int i = 0; i < n ; i++)
    {
        cin >> x;
        t[i] = x;
    }
    for (int i = 0; i < n; i++)
    {
        if(t[i] == 0 && p0 == -1) {p0 = i;}
        else if(t[i] == 1 && p1 == -1) {p1 = i;};
    }

    for (int i = n-1; i >= 0; i--)
    {
        if(t[i] == 0 && o0 == -1) {o0 = i;}
        else if(t[i] == 1 && o1 == -1) {o1 =i;};
    }
    cout << max(abs(p0 - o1), abs(p1 - o0));

}


