#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0, 0, -1, 1, -1, 1, -1, 1};
const int dy[] = {-1, 1, 0, 0, -1, -1, 1, 1};

int n, m;

int a[1005][1005], b[1005][1005];

bool check_coloring(int u, int v){
    for (int i = 0; i < 8; ++i){
        if (a[u + dx[i]][v + dy[i]] != 1) return false;
    }
    return true;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("1059B.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i){
        string temp;
        cin >> temp;
        for (int j = 0; j < temp.size(); ++j){
            if (temp[j] == '#') a[i][j + 1] = 1;
            else a[i][j + 1] = -1;
            b[i][j + 1] = -1;
        }
    }
    for (int i = 2; i < n; ++i){
        for (int j = 2; j < m; ++j){
            if (check_coloring(i, j)){
                for (int k = 0; k < 8; ++k){
                    b[i + dx[k]][j + dy[k]] = 1;
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if (a[i][j] != b[i][j]){
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}
