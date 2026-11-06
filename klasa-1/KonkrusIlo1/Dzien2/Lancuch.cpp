#include <bits/stdc++.h>
using namespace std;

long long n,w1,x1,nx1=4e18,ml;
int t[300010];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w1;
        t[i] = w1;
    }

    ml = t[1];
    for (int j = 3; j < n-1; j ++)
    {
        if (t[j - 2]<ml) ml = t[j-2];

        if (ml + t[j]< nx1)
            {
                nx1 = ml+t[j];
            }
    }



    cout << nx1;


}

