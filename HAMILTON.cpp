#include <bits/stdc++.h>

using namespace std;

int n, m, kq[100];
bool a[100][100], visited[100];

void hamilton(int i, int k){
    if (k == n){
        if (kq[k - 1] != 1) return;
        if (kq[k - 1] == 1){
            for (int q = 0; q < n; ++q) printf("%2d", kq[q]);
            exit(0);
        }
    }
    for (int j = 1; j <= n; ++j){
        if (visited[j] == false){
            if (a[i][j]){
                kq[k] = j;
                visited[j] = true;
                hamilton(j, k + 1);
                visited[j] = false;
            }
        }
    }
}

int main(){
    freopen("HAMILTON.inp", "r", stdin);
    int temp1, temp2;
    memset(visited, false, sizeof visited);
    memset(a, false, sizeof a);
    scanf("%D%D", &n, &m);
    for (int i = 0; i < m; ++i){
        scanf("%d%d", &temp1, &temp2);
        a[temp1][temp2] = true;
    }
    kq[0] = 1;
    visited[1] == true;
    hamilton(1, 1);
    return 0;
}
