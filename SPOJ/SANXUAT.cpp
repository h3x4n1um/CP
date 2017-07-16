#include <bits/stdc++.h>

using namespace std;

int t, m, n;
int f[105][1005], a[105][105];

int find(int i, int s){
    if (s > m) return -1;
    if (i > n) return s;
    if (f[i][s] != 0) return f[i][s];
    int res = -1;
    for (int j = 1; j <= a[i][0]; ++j){
        res = max(res, find(i + 1, s + a[i][j]));
    }
    return f[i][s] = res;
}

int dp(){
    f[0][0] = 1;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            for (int k = 0; k <= m; ++k){
                if (f[i - 1][k] && k + a[i][j] <= m){
                    f[i][k + a[i][j]] = true;
                }
            }
        }
    }
    int res = m;
    while(res > 0 && !f[n][res]) --res;
    return res;
}


int main(){
    freopen("SANXUAT.inp", "r", stdin);
    freopen("SANXUAT.out", "w", stdout);
    scanf("%d", &t);
    while(t-- > 0){
        int ans = -1;
        scanf("%d%d", &m, &n);
        for (int i = 1; i <= n; ++i){
            scanf("%d", &a[i][0]);
            for (int j = 1; j <= a[i][0]; ++j){
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 1; i <= n; ++i){
            for (int j = 0; j <= m; ++j){
                f[i][j] = 0;
            }
        }
        printf("%d\n", dp());
    }
    return 0;
}
