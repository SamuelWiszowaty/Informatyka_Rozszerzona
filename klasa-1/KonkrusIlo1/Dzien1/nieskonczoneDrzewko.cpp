#include <iostream>
using namespace std;

int a,b,n=0;


int main ()
{
    cin >> a >> b;
    while (a != b)
    {
        if (a > b)
            a = a/2;

        else b = b/2;
        n++;

    }
    cout << n;
}
