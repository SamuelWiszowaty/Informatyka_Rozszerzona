#include <iostream>
using namespace std;

long long p,a=1,b;


int main()
{
    cin >> p;
    long long a =1;
    while ((a+1)*(a+1) <= p)
    {
        a++;
    }
    while (p % a != 0)
    {
        a--;
    }
    b = p/a;
    cout << 2*(a+b);



}

