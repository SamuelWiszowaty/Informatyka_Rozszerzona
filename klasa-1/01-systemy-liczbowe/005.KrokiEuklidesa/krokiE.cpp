#include <iostream>
using namespace std;

long long a,b;
int kroki(long long a, long long b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return 1 + kroki(b, a % b);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> a >> b;
    cout << kroki(a, b);
    return 0;
}
