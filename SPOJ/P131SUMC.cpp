#include <bits/stdc++.h>

using namespace std;

float a, b, c, d, th1, th2 ,th3 ,th4, temp;

int main(){
    cin >> a >> b >> c >> d;
    th1 = abs((float) a/c - b/d);
    th2 = abs((float) c/d - a/b);
    th3 = abs((float) d/b - c/a);
    th4 = abs((float) b/a - d/c);
    if (th1 >= th2 && th1 >= th3 && th1 >= th4) cout << 0;
    if (th2 >= th1 && th2 >= th3 && th2 >= th4) cout << 1;
    if (th3 >= th1 && th3 >= th2 && th3 >= th4) cout << 2;
    if (th4 >= th1 && th4 >= th2 && th4 >= th3) cout << 3;
    return 0;
}
