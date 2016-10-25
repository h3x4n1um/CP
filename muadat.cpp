#include <bits/stdc++.h>

using namespace std;

const int di[]{1, -1, 0, 0};
const int dj[]{0, 0, -1, 1};

struct answer{
    int k, i, j, S;
};

int m, n, a[102][102], tempS;
bool went[102][102];
answer ans;

void dfs(int i, int j){
    ++tempS;
    went[i][j] = true;
    for (int temp = 0; temp < 4; ++temp){
        if (!went[i + di[temp]][j + dj[temp]] && a[i + di[temp]][j + dj[temp]] == a[i][j]){
            dfs(i + di[temp], j + dj[temp]);
        }
    }
}

int main(){
    freopen("muadat.inp", "r", stdin);
    freopen("muadat.out", "w", stdout);
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            if (!went[i][j] && a[i][j] != 0){
                tempS = 0;
                ++ans.k;
                dfs(i, j);
                if (tempS > ans.S){
                    ans.S = tempS;
                    ans.i = i;
                    ans.j = j;
                }
            }
        }
    }
    printf("%d\n%d %d\n%d", ans.k, ans.i, ans.j, ans.S);
    return 0;
}
