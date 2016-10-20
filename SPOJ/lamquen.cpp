#include <bits/stdc++.h>

using namespace std;

int n, m, check;
bool a[1001][1001], used[5001];

void bfs(int k){
    used[k] = true;
    for (int i = 1; i <= n; ++i){
        if (not used[i] && (a[k][i] || a[i][k])){
            check += 1;
            bfs(i);
        }
    }
}

int main(){
    freopen("lamquen.inp", "r", stdin);
    //freopen("lamquen.out", "w", stdout);
    int temp1, temp2;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        scanf("%d%d", &temp1, &temp2);
        a[temp1][temp2] = a[temp2][temp1] = true;
    }
    bfs(1);
    if (check == m) printf("1");
    else printf("0");
    return 0;
}
