#include <bits/stdc++.h>
using namespace std;

int x1,y1a,x2,y2a,x3,y3a,x4,y4a,szer = 0, wyso = 0;


int main() 
{
    cin >> x1 >> y1a >> x2 >>y2a >> x3 >> y3a >> x4 >> y4a;
szer = max(0 , min(max(x1, x2), max(x3, x4)) - max(min(x1, x2), min(x3, x4)));

wyso = max(0, min(max(y1a, y2a), max(y3a, y4a)) - max(min(y1a, y2a), min(y3a, y4a)));

    cout << szer * wyso;


}
