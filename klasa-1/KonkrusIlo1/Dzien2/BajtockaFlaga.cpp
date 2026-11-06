#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> p(n + 1, 0), np(n + 1, 0);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (i % 2 == 0) p[k]++;
        else np[k]++;
    }

    int p1 = 0, p2 = 0, mp1 = 0, mp2 = 0;
    int np1 = 0, np2 = 0, mnp1 = 0, mnp2 = 0;

    for (int c = 1; c <= n; c++)
        {
        if (p[c] > mp1) {
            mp2 = mp1; p2 = p1;
            mp1 = p[c]; p1 = c;
        } else if (p[c] > mp2) {
            mp2 = p[c]; p2 = c;
        }

        if (np[c] > mnp1) {
            mnp2 = mnp1; np2 = np1;
            mnp1 = np[c]; np1 = c;
        } else if (np[c] > mnp2) {
            mnp2 = np[c]; np2 = c;
        }
    }

    int z = 0;
    if (p1 != np1) z = mp1 + mnp1;
    else z = max(mp1 + mnp2, mp2 + mnp1);

    cout << n - z << "\n";
    return 0;
}

// w tym zadaniu zostalo uzyte ai
