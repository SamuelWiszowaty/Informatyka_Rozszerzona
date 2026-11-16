#include <iostream>
using namespace std;

int n,liczba = 0;


int main()
{
    cin >> n;
    int t[n];

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (t[i] < t[i+1]) liczba++;
    }
    cout << liczba;


}
