#include <iostream>
using namespace std;

int a,b,k = 0;

int main ()
{
    cin >> a >> b;
    for (int i = a; i <= b; i++ )
    {
        if (i%3!=0 && i%5!=0 && i%7!=0 && i%11!=0){cout << i << " ";k = k + i;}


    }
    if (k <= 0) cout << "brak";
}

