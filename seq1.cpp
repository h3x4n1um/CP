#include <bits/stdc++.h>

using namespace std;

int n, ans;
int a[505], f[505][505];

int main(){
    freopen("seq1.inp", "r", stdin);
    freopen("seq1.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
    }
    for (int k = 1; k <= n; ++k){
        fill(f[0], f[n], 0);
        for (int i = 1; i <= k; ++i){
            for (int j = k + 1; j <= n; ++j){
                if (a[i] < a[j]) f[i][j] = f[i - 1][j - 1] + 1;
                else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
        ans = max(ans, f[k][n]);
    }
    printf("%d", ans);
    return 0;
}
