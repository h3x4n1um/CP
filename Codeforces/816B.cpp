#include <bits/stdc++.h>

using namespace std;

int n, k, q;
int f[200005];

int main(){
    scanf("%d%d%d", &n, &k, &q);
    for (int i = 1; i <= n; ++i){
        int l, r;
        scanf("%d%d", &l, &r);
        for (int j = l; j <= r; ++j) ++f[j];
    }
    for (int i = 1; i <= q; ++i){
        int a, b, ans = 0;
        scanf("%d%d", &a, &b);
        for (int j = a; j <= b; ++j) if (f[j] >= k) ++ans;
        printf("%d\n", ans);
    }
    return 0;
}
