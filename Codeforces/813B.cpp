#include <bits/stdc++.h>

using namespace std;

long long x, y, l, r, ans;
long long f[1005][1005];

void solve(long long a, long long b, long long prev_year){
    if (f[a][b] != 0) return;
    f[a][b] = -1;
    long long year = (long long) (pow(x, a) + pow(y, b));
    cout << "year = " << year << endl;
    if (year > r) return;
    ans = max(year - prev_year, ans);
    if (ans > 0) f[a][b] = ans;
    solve(a + 1, b, max(year, prev_year));
    solve(a, b + 1, max(year, prev_year));
}

int main(){
    cin >> x >> y >> l >> r;
    solve(0, 0, l - 1);
    cout << ans;
    return 0;
}
