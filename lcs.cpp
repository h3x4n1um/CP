#include <bits/stdc++.h>

using namespace std;

int m, n;
int a[1005], b[1005], f[1005][1005];
vector <int> ans;

int main(){
    freopen("lcs.inp", "r", stdin);
    freopen("lcs.out", "w", stdout);
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i){
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i){
        scanf("%d", &b[i]);
    }
    for (int i = 1; i <= m; ++i){
        for (int j = 1; j <= n; ++j){
            if (a[i] == b[j]) f[i][j] = f[i - 1][j - 1] + 1;
            else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
        }
    }
    printf("%d\n", f[m][n]);
    while(m > 0 && n > 0){
        if (a[m] == b[n]){
            ans.push_back(a[m]);
            --m;
            --n;
        }
        else{
            if (f[m][n - 1] == f[m][n]) --n;
            else if (f[m][n] == f[m - 1][n]) --m;
        }
    }
    for (int i = ans.size() - 1; i >= 0; --i){
        printf("%d ", ans[i]);
    }
    return 0;
}
