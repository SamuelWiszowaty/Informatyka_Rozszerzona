#include <bits/stdc++.h>
using namespace std;

int n,a,b;
int t[1010];

int main()
{

    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i< n; i++)
    {
        cin >> a;
        if (a%2 == 0) {
            t[i] = a;
        }
        else {
            t[i] = 2*a;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << " ";
    }
}
