#include <bits/stdc++.h>
using namespace std;

int n,i,j,x,najw,najwi;
int W[1010],m[1010];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            cin >> x;
            W[i] += x;
        }
    }
    for (int i = 0 ; i < n; i++)
    {
        if (najw < W[i])
        {
            najwi = i;
            najw = W[i];
        }
    }
    cout << najwi + 1;


}


