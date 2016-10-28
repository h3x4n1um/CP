#include <bits/stdc++.h>

using namespace std;

int n, m, max0, mien, temp;
bool used[102][102], a[102][102];

void dfs(int k, int l){
    used[k][l] = true;
    if (not used[k + 1][l] && a[k + 1][l]){
        ++temp;
        dfs(k + 1, l);
    }
    if (not used[k][l + 1] && a[k][l + 1]){
        ++temp;
        dfs(k, l + 1);
    }
    if (not used[k - 1][l] && a[k - 1][l]){
        ++temp;
        dfs(k - 1, l);
    }
    if (not used[k][l - 1] && a[k][l - 1]){
        ++temp;
        dfs(k, l - 1);
    }
}

int main(){
    freopen("mien.inp", "r", stdin);
    //freopen("mien.out", "w", stdout);
    scanf("%d%d", &m ,&n);
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            scanf("%d", &temp);
            if (temp == 0) a[i][j] = true;
        }
    }
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            if (not used[i][j] && a[i][j]){
                temp = 1;
                dfs(i, j);
                max0 = max(max0, temp);
                ++mien;
            }
        }
    }
    printf("%d\n%d", mien, max0);
    return 0;
}
