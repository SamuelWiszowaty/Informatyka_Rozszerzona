#include <bits/stdc++.h>
using namespace std;

int m,s,x,s1,najml=1,najwl,m1,m2,i=0;

int main()
{
    cin >> m >> s;
    int t[m];
    s1 = s;
    m2 = m;
    m1 = m;
    if (m == 0|| s == 0) 
    {
        cout << "-1 -1";
        return 0;
    }
    if (s > m*9)
    {
        cout << "-1 -1";
        return 0;
    }
    while(s > 0)
    {
        if(s > 9)
        {
            najwl = najwl*10 + 9;
            t[i] = 9;
            s -= 9;
            m1--;
            i++;
        }
        else if (s <= 9) {
            najwl = najwl*10 + s;
            t[i] = s;
            s = 0;
            m1--;
            i++;
        }
    }
    if (m1 > 0)
    {
        for (int i = 0; i < m1;i++)
        {
            najwl *=10;
        }
    }
    sort (t, t+m);
    i = 0;
    while (m1 >0)
    {
        najml *= 10;
        m1--;
    }
    while (s1 > 0)
    {
        najml = najml*10 + t[i];
        s1 -= t[i];
        i++;
    }
    najml -= 100;
    cout << najml << " " << najwl;

}