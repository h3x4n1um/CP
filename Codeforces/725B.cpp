#include <bits/stdc++.h>

using namespace std;

unsigned long long int n, ans;
string s;
map <int, int> d;

int main(){
    d['a'] = 4;
    d['b'] = 5;
    d['c'] = 6;
    d['d'] = 3;
    d['e'] = 2;
    d['f'] = 1;
    cin >> n >> s;
    ans += ((n - 1) / 4) * (4 + 2 * 6);
    n = n % 4;
    if (n == 0 || n == 2) ans += 6 + 1;
    ans += d[s[0]];
    cout << ans;
    return 0;
}
