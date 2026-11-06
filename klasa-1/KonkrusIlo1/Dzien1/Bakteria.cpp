#include <iostream>
using namespace std;

int n,x,y,dni = 0;



int main ()
{
    cin >> n >> x >> y;
    if (n > 0)
    dni = max(x-1, n-x) + max(y-1, n-y);
    cout << dni;

}
