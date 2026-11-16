#include <iostream>
using namespace std;


int n,n1,i=0,spacje = 0,iG=0,spacjeS=2;

int main ()
{
    cin >> n;
    iG=n;
    n1= n-1;
    spacje=iG-1;
    for(i; i<n1; i++)
    {
        while (spacje > 0)
        {
            cout << " ";
            spacje--;
        }
        cout << "x";
        iG--;
        spacje = iG-1;
        if (i >= 1)
        {
            for (int j = 0; j<spacjeS; j++)
            {
                cout << " ";
            }
            spacjeS +=2;
        }

        cout << "x";
        cout << endl;
    }
    for (int k = 0; k < n*2; k++)
    {
        cout << "x";
    }
    cout << endl;
    while (n > 1)
    {
        cout << " ";
        n--;
    }
    cout << "xx";

}
