#include <bits/stdc++.h>
using namespace std;

long long n,k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    k = k%26;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int i = 0; i < s.length();i++)
        {
            s[i] = (s[i] - 'A' + k)%26 + 'A';
        }

        cout << s << endl;
    }






}


