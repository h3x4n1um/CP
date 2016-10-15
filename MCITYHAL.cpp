#include <bits/stdc++.h>

using namespace std;

int m, n, a[205][205], ans[205];
bool checked[205][205];

int fix(int i, int j){
    checked[i][j] = true;
    if (!checked[i + 1][j] && a[i + 1][j] == 0) return 1 + fix(i + 1, j);
    else return 1;
}

int main(){
    memset(a, 1, sizeof a);
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            scanf("%1d", &a[i][j]);
        }
    }
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            if (!checked[i][j] && a[i][j] == 0){
                ++ans[fix(i, j)];
            }
        }
    }
    for (int i = 1; i <= m; ++i){
        if (ans[i] != 0) printf("%d %d\n", i, ans[i]);
    }
    return 0;
}
