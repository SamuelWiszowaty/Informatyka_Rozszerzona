#include <bits/stdc++.h>
using namespace std;

long long n,x,najmniejsza,najwieksza,ilosc,odleglosc=1,miejsce = 1,miejsce2 = 1;
long long t[1000010];
long long ogt[1000010];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        t[i] = x;
        ogt[i] = x;
    }
    sort (t, t + n);

    bool z = false;
    for (int i = 0; i < n; i++)
    {
        if (t[i] <= 0) {ilosc = count(t,t + n,abs(t[i]));
                if ((t[i] == 0 && ilosc >= 2) || (t[i] < 0 && ilosc >= 1))
            {
                najmniejsza = t[i];
                najwieksza = abs(t[i]);
                z = true;
                break;
            }
        }
    }
    if (!z) odleglosc = 0;

    if (odleglosc == 0) cout << "0";
    else if (najwieksza+najmniejsza!=0) cout << "-1";
        else
    {
        int p1 = -1, k1 = -1;
        int p2 = -1, k2 = -1;

        for (int i = 0; i < n; i++) {
            if (ogt[i] == najmniejsza) {
                if (p1 == -1) p1 = i + 1;
                k1 = i + 1;
            }
            if (ogt[i] == najwieksza) {
                if (p2 == -1) p2 = i + 1;
                k2 = i + 1;
            }
        }


        long long max_d = 0;
        if (p1 != -1 && p2 != -1) {
            max_d = max({max_d, (long long)abs(p1 - k2), (long long)abs(k1 - p2), (long long)abs(p1 - p2), (long long)abs(k1 - k2)});
        }
        cout << max_d;
    }
}
