#include <iostream>
using namespace std;


int n=0,x=0,d=0,suma = 0; // n to zestawy kasztanow, 
// x to po prostu liczby kasztanow
// a d to jest ile dni zbierano poszczegolny zestaw


int main(){
    cin >> n;

    for (int i =0; i<n; i++){
        cin >> d;

        suma = 0;
        for (int j = 0; j<d; j++)
        {
            cin >> x;
            suma += x;
        }
        cout << suma << endl;
    }
}