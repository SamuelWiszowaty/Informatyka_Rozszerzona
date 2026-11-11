#include <iostream>
using namespace std;

long long odwroc(long long n, long long wynik)
{
    if (n == 0)
    {
        return wynik;
    }
    else
    {
        return odwroc(n / 10, wynik * 10 + n % 10);

    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;
    cout << odwroc(n, 0);
    return 0;
}
