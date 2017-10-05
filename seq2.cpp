#include <bits/stdc++.h>

using namespace std;

int n;
int a[10005], f[10005][10005];

int main(){
    freopen("seq2.inp", "r", stdin);
    freopen("seq2.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i){
        for (int j = i-1; j >= 1; --j){
            if (a[j] < a[i]) f[i][j] = f[i - 1][j + 1] + 1;
            else f[i][j] = max(f[i - 1][j], f[i][j + 1]);
        }
    }
    printf("%d", f[n][1]);
    return 0;
}
