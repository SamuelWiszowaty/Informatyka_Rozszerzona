#include <bits/stdc++.h>
using namespace std;

long long n,cyfra,makser;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    char ch;
    cin >> s;
    for (size_t i = 0; i < s.size();i++)
    {
        cyfra = s[i]-'0';
        cyfra = 9-cyfra;
        ch = cyfra + 48;
        if (i == 0 && ch == '0')
        {
            cout << s[i];
        }
        else if (ch < s[i])
        {
            cout << ch;
        }

        else
        {
            cout << s[i];
        }

    }








}


