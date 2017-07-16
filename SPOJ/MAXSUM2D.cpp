#include <bits/stdc++.h>

using namespace std;

int n, m, ans;
int a[505][505], f[505][505];

int main(){
    #ifndef ONLINE_JUDGE
        freopen("MAXSUM2D.inp", "r", stdin);
        freopen("MAXSUM2D.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            scanf("%d", &a[i][j]);
            f[i][j] = f[i - 1][j] + a[i][j];
        }
    }
    for (int t = 1; t <= m; ++t){
        for (int b = t; b <= m; ++b){
            int s = 0;
            for (int i = 1; i <= n; ++i){
                int temp = f[b][i] - f[t - 1][i];
                if (s + temp <= 0) s = 0;
                else s += temp;
                ans = max(ans, s);
            }
        }
    }
    printf("%d", ans);
    return 0;
}
