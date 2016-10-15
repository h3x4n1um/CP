#include <bits/stdc++.h>

using namespace std;

int n, m, f[10000][10000];
pair <int, int> a[10000];

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &a[i].first, &a[i].second);
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            f[i][j] = f[i - 1][j];
            if (a[i].first <= j) f[i][j] = max(f[i - 1][j - a[i].first] + a[i].second, f[i][j]);
        }
    }
    printf("%d", f[n][m]);
    return 0;
}

