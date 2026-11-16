#include <iostream>
using namespace std;

int n,i=0,k=0,j=0,liczba,liczbaG,liczbaG2;

int main ()
{
    cin >> n;

    liczbaG = n;
    liczba = 1;
    liczbaG2 = liczbaG;

    for (int i=0; i < n;i++)
        {
            cout << "  ";
        }
    cout << "0" << endl;
    i = n-1;

    while (n > 0)
    {
        j=0;
        k=0;

        for (int spacja = 0; spacja < n-1;spacja++)
        {
            cout << "  ";
        }
        for (;j<liczba;j++)
        {
            cout << j << " ";
            k++;
        }
        for (;k>=0;k--)
        {
            cout << k<< " ";
        }
        cout << endl;
        liczba ++;
        n--;
    }
// druga czesc
    int i2=i;
    int drap = 1;
    int t=1;
    while (i2 > 0)
    {
        k = 0;
        i = i2;
        for (;drap > 0; drap--)
        {
            cout << "  ";
        }
        for (int k = 0; k<i; k++)
        {
            cout <<k<< " ";
        }
        for (;i>=0;i--)
        {
            cout << i<< " ";
        }
        t++;
        drap = t;
        i2--;
        cout << endl;
    }
    for (int i = 0; i < liczbaG;i++) cout << "  ";
    cout << "0";



}
