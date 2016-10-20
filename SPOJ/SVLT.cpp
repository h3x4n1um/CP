#include <bits/stdc++.h>

using namespace std;

int n, m, kq;
bool a[101][101], visited[101];

void dfs(int i){
    for (int j = 1; j <= n; ++j){
        if (not visited[j]){
            if (a[i][j] || a[j][i]){
                visited[j] = true;
                dfs(j);
            }
        }
    }
}

int main(){
    freopen("SVLT.inp", "r", stdin);
    freopen("SVLT.out", "w", stdout);
    memset(a, false, sizeof a);
    memset(visited, false, sizeof visited);
    int temp1, temp2;
    cin >> n >> m;
    for (int i = 0; i < m; ++i){
        cin >> temp1 >> temp2;
        a[temp1][temp2] = true;
    }
    for (int i = 1; i <= n; ++i){
        if (not visited[i]){
            visited[i] = true;
            dfs(i);
            ++kq;
        }
    }
    cout << kq;
    return 0;
}
