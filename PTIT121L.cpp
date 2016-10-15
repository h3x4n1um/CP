#include <bits/stdc++.h>

using namespace std;

long long int s, a, b, can;

int main(){
    //freopen("PTIT121L.inp", "r", stdin);
    for (int i = 0; i < 3; ++i){
        cin >> a >> b;
        s = s + a * b;
    }
    can = (long long int) sqrt(s);
    if (can * can == s) cout << can;
    else cout << 0;
    return 0;
}
