#include <bits/stdc++.h>

using namespace std;

int n, ans;
int a[405][405];

int main(){
    freopen("trochoi.inp", "r", stdin);
    freopen("trochoi.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            int cc = a[i][j], cp = a[i][j];
            for (int k = 1; i + k <= n && j + k <= n && i - k > 0 && j - k > 0; ++k){
                cc += a[i + k][j + k] + a[i - k][j - k];
                cp += a[i + k][j - k] + a[i - k][j + k];
            }
            ans = max(ans, cc - cp);
        }
    }
    for (int i = 1; i <= n + 1; ++i){
        for (int j = 1; j <= n + 1; ++j){
            int x1 = i - 1, x2 = i + 1, y1 = j - 1, y2 = j + 1;
            int cc = 0;
            int cp = 0;
            while(x1 > 0 && y1 > 0 && x2 <= n && y2 <= n){
                cc += a[x1][y1] + a[x2][y2];
                cp += a[x1][y2] + a[x2][y1];
                ans = max(ans, cc - cp);
                --x1;
                --y1;
                ++x2;
                ++y2;
            }
        }
    }
    printf("%d", ans);
    return 0;
}
