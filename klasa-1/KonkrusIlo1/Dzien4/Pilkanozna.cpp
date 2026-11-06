#include <bits/stdc++.h>
using namespace std;

long long n,j,KF=0;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;



    vector<int>G(n);
    vector<int>W(n);

    for(int i = 0; i < n; i++)
    {
        cin >> G[i];
        cin >> W[i];

    }
    for(int d=0; d < n; d++)
    {
        for(int s = n-1; s >= 0 ; s--)
        {
            if(d == s)
            {
                continue;
            }
            else if(G[d] == W[s])
            {
                KF++;
            }
        }
    }
    cout << KF;
}

