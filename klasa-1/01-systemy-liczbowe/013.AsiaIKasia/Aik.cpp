#include <iostream>
using namespace std;

int n,a,k,wa = 0,wk = 0;

int main ()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> k;
        if (a > k) wa += 1;
        else if (k > a) wk += 1;
    }
    if (wa > wk) cout << "Asia";
    else if (wk > wa) cout << "Kasia";
    else cout << "Remis";



}

