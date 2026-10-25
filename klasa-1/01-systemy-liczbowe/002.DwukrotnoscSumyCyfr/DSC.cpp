#include <iostream>

using namespace std;

long long  n,x;
long long DWS (long long a,long long b)
{

    for (int i = 0; i < b-1; i++)
    {
        long long suma = 0;
        while (a > 0)
        {
        suma +=a%10;
        a /= 10;
        }
        a = 2*suma;
    }
    return a;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    cout << DWS(x,n);



}
