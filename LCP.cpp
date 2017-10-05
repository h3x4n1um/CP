#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[15][105], f[15][105];

int check(int k){
    vector <int> p;
    for (int i = 2; i <= m; ++i){
        int temp = 0;
        for (int j = 1; j <= n; ++j){
            if (a[i][j] == a[1][k]){
                for (int q = j - 1; q >= 1; --q) temp = max(temp, f[i][q]);
                f[i][j] = temp + 1;
            }
        }
        p.push_back(temp);
    }
    int temp = 105;
    for (int i = 0; i < p.size(); ++i) temp = min(temp, p[i]);
    printf("temp = %d k = %d\n", temp, k);
    return temp % 105;
}

int main(){
    freopen("LCP.inp", "r", stdin);
    freopen("LCP.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i){
        f[1][i] = check(i) + 1;
    }
    printf("%d\n", f[1][n]);
    /*DEBUG*/
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            printf("%d ", f[i][j]);
        }
        puts("");
    }
    return 0;
}
