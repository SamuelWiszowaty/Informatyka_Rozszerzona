#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    if (!(cin >> n)) {return 0;}

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    int przegrody = 0;

    for (int k = 1; k <= n; k++) {

        vector<int> a1(a.begin(), a.begin() + k);

        vector<int> b1(b.begin(), b.begin() + k);

        sort(a1.begin(), a1.end());
        sort(b1.begin(), b1.end());

        if (a1 == b1)
        {
            przegrody++;
        }
    }


    cout << przegrody;
}
