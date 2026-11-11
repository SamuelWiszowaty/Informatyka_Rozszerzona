#include <iostream>
using namespace std;

int IleP(int n){
    if (n==0) return 0;
    return !(n%2)+IleP(n/10);




}
long long a,b;

int main()
{
    cin >> a ;
    cout << IleP(a);
}
