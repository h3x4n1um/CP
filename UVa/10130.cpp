#include <bits/stdc++.h>

using namespace std;

int T, n, g;
int p[1005], w[1005], f[1005][1005], m[105];

int main(){
    #ifndef ONLINE_JUDGE
        freopen("10130.inp", "r", stdin);
        freopen("10130.out", "w", stdout);
    #endif // ONLINE_JUDGE
    /*READ*/
    scanf("%d", &T);
    while(T-- > 0){
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i){
            scanf("%d%d", &p[i], &w[i]);
        }
        scanf("%d" ,&g);
        for (int i = 1; i <= g; ++i){
            scanf("%d", &m[i]);
        }
        /*PROCESS*/
        int ans = 0;
        for (int i = 1; i <= g; ++i){
            for (int j = 0; j <= m[i]; ++j){
                f[0][j] = 0;
            }
            for (int j = 1; j <= n; ++j){
                for (int k = 1; k <= m[i]; ++k){
                    f[j][k] = f[j - 1][k];
                    if (k >= w[j]) f[j][k] = max(f[j - 1][k], f[j - 1][k - w[j]] + p[j]);
                }
            }
            ans += f[n][m[i]];
        }
        /*WRITE*/
        printf("%d\n", ans);
    }
    return 0;
}
