#include <bits/stdc++.h>
using namespace std;

long long n,swl = 0;
long long t[1005][1005];
long long pw[1005];
long long pk[1005];
long long maxw = -1, maxk = -1,idx_w = 0,idx_k = 0,kanmaxw = 0,maxodej = -1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;

    for (int i = 0; i < n; i++)
        {
            kanmaxw=0;
            for (int j = 0; j < n; j++)
            {
                cin >> t[i][j];
                kanmaxw += t[i][j];
                swl += t[i][j];
                pw[i] += t[i][j];
                pk[j] += t[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j= 0; j < n; j++)
            {
                if(pw[i]+ pk[j]-t[i][j] > maxodej)
                {
                    maxodej = pw[i]+ pk[j]-t[i][j];
                    idx_w = i;
                    idx_k = j;
                }
            }
        }


    long long przeciecie = t[idx_w][idx_k];


    cout << swl - (pw[idx_w] + pk[idx_k] - przeciecie);

}
