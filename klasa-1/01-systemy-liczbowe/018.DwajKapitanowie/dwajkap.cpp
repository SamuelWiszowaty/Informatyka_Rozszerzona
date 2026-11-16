#include <bits/stdc++.h>
using namespace std;

int n;
long long w[100010], k[100010],maxW = 0,x,y,max1=-1,max2=-1;

int main()
{
    cin >> n;
    int t[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x == 1 && y > max1){
        if (max1 > max2){
        max2 = max1;}
        max1 = y;
        }
        else if (x==2 && y > max2)
        {
            max2 = y;
        }
    }
    cout << max1 + max2;
}
