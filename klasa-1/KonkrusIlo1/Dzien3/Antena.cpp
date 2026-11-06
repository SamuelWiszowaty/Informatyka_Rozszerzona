#include <bits/stdc++.h>
using namespace std;

long long x1,x2,x3,dys,max1,min1;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x1 >> x2 >> x3;
    min1 = min({x1,x2,x3});
    max1 = max({x1,x2,x3});

    dys = (max1-min1+1)/2;
    if (min1 < 0)
    {
       dys= max(dys, abs(min1));
    }

    cout << dys;

}

