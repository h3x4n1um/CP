#include <bits/stdc++.h>

using namespace std;

const int du[]{1, -1, 0, 0};
const int dv[]{0, 0, -1, 1};

int n, ans;
bool went[7][7];
char a[7][7];

void dfs(int u, int v, int open, int close, int direction){
    if (open > 0 && open == close){
        ans = max(ans, open + close);
        return;
    }
    for (int i = 0; i < 4; ++i){
        int _u = u + du[i];
        int _v = v + dv[i];
        if (a[_u][_v] != 0 && !went[_u][_v]){
            if (a[_u][_v] == ')'){
                went[_u][_v] = true;
                dfs(_u, _v, open, close + 1, 1);
                went[_u][_v] = false;
            }
            else if (direction == 2){
                went[_u][_v] = true;
                dfs(_u, _v, open + 1, close, direction);
                went[_u][_v] = false;
            }
        }
    }
}

int main(){
    freopen("hshoe.in", "r", stdin);
    freopen("hshoe.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            while (scanf("%c", &a[i][j]) && a[i][j] == '\n');
        }
    }
    went[1][1] = true;
    dfs(1, 1, 1, 0, 2);
    printf("%d", ans);
    return 0;
}
