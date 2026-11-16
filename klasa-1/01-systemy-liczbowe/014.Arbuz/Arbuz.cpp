#include <iostream>
using namespace std;

int w,k =0;

int main ()
{
    cin >> w;
    if (w == 2) {cout << "NIE"; return 0;}
    if (w%2 == 0) cout << "TAK";
        else cout << "NIE";
}

