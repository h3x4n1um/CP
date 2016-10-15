#include <bits/stdc++.h>

#define oo 1000003

using namespace std;

int m, n, a[109][109], ans;

int main(){
//    #ifndef ONLINE_JUDGE
//        freopen("QBMAX.inp", "r", stdin);
//    #endif // ONLINE_JUDGE
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i <= n; ++i){
        a[0][i] = -oo;
    }
    for (int j = 1; j <= n; ++j){
        for (int i = 1; i <= m; ++i){
            a[i][j] += max(max(a[i - 1][j - 1], a[i][j - 1]), a[i + 1][j - 1]);
            ans = max(ans, a[i][j]);
        }
    }
    printf("%d", ans);
    return 0;
}
