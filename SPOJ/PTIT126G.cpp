#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[105], f[10005];

int main(){
    #ifndef ONLINE_JUDGE
        freopen("PTIT126G.inp", "r", stdin);
        freopen("PTIT126G.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i) f[i] = 1000000007;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
        f[a[i]] = 1;
    }
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            if (i >= a[j] && f[i] > f[i - a[j]] + 1) f[i] = f[i - a[j]] + 1;
        }
    }
    if (f[m] == 1000000007) f[m] = -1;
    printf("%d", f[m]);
    return 0;
}
