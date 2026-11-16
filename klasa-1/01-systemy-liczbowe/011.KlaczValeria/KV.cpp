#include <iostream>
using namespace std;

int s1, s2, s3, s4,x=1;

int main ()
{
    cin >> s1 >> s2 >> s3 >> s4;

    if (s2 != s1) x++;
    if (s3 != s1 && s3 != s2) x++;
    if (s4 != s1 && s4 != s2 && s4 != s3) x++;

    cout << 4 - x;
}
