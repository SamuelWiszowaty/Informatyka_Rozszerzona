#include <bits/stdc++.h>
using namespace std;

long long n,k,makswL = 0,makswL2,CwL=-1,CwL2=-1,maksw=-1,maksw2=-1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    long long t[n];
    for(int i = 0; i < 10; i++)
    {
        cin >> k;
        t[i] = k;

        if (makswL < t[i]/k)
        {

            makswL = t[i]/k;
            makswL2 = makswL;
            maksw = i;
            maksw2 = maksw;
            if (CwL2 > CwL);
            else CwL2 = CwL;
            CwL = k;

        }
    }
        cout << "zapalki " << n << endl;
    cout << " naj ceny " << CwL << " " << CwL2;
    if (makswL == 0)
    {
        cout << maksw2;
        int n2 = n;
        n2 -= CwL2;
        for (int i = CwL; i < n; i+=CwL)
        {
            cout << maksw;
        }
    }

}


