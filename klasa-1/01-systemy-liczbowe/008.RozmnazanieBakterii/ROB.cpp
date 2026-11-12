#include <iostream>
using namespace std;

    int wynik = 0;
    long long x;

int main() {

    cin >> x;

    while (x > 0) {
        wynik += x % 2;
        x /= 2;
    }

    cout << wynik;


}