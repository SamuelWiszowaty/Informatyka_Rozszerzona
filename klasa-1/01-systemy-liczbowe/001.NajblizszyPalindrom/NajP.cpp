#include <iostream>

using namespace std;

int n;

int Najp(int a, int b, int a2, int razy)
{
    a2 = a;
    b = 0;

    while (a > 0)
    {
        b = b * 10 + a % 10;
        a /= 10;
    }

    if (a2 == b)
    {
        return razy;
    }
    else
    {
        razy++;
        return Najp(a2 + 1, 0, a2 + 1, razy);
    }
}

int main()
{
    cin >> n;
    cout << Najp(n, 0, n, 0);

    return 0;
}
