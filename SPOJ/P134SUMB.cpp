#include <bits/stdc++.h>

using namespace std;

long long int g, y, s, p, delta;
double x1, x2;

int main(){
    cin >> g >> y;
    p = g + y;
    s = (2 * 4 + (g - 4)) / 2;
    delta = s * s - 4 * p;
    x1 = (s + (double) sqrt(delta)) / 2;
    x2 = (s - (double) sqrt(delta)) / 2;
    cout << (long int) x2 << " " << (long int) x1;
    return 0;
}
