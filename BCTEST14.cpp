#include <bits/stdc++.h>

using namespace std;

long int a, b, v;

int main(){
    freopen("BCTEST14.inp", "r", stdin);
    cin >> a >> b >> v;
    cout << (long int) ceil((double) (v - a) / (a - b)) + 1;
    return 0;
}
