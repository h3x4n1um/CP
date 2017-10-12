#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("table.inp", "r", stdin);
    freopen("table.out", "w", stdout);
    int64_t n;
    scanf("%I64d", &n);
    int64_t r = (int64_t) floor(sqrt(n)),
            d = (int64_t) ceil(sqrt(n));
    if (d * r < n) ++r;
    printf("%I64d %I64d", r, d);
    return 0;
}
