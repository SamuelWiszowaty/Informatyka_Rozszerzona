#include <iostream>
using namespace std;

int n;


int main()
{
    cin >> n;
    int t[n];
    for (int i = 0; i < n-1; i++)
        {
            int x;
            cin >> x;
            t[x-1] = x;
        }
    for (int i = 0; i < n; i++)
    {
        if (t[i] != i+1) cout << i+1;
    }





}
