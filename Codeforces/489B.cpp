#include <bits/stdc++.h>

using namespace std;

int n, m, ans;
int a[105], b[105];

int main(){
    #ifndef ONLINE_JUDGE
        freopen("489B.inp", "r", stdin);
    #endif // ONLINE_JUDGE

    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        ++a[temp];
    }
    scanf("%d", &m);
    for (int i = 1; i <= m; ++i){
        int temp;
        scanf("%d", &temp);
        ++b[temp];
    }

    for (int i = 1; i <= 100; ++i){
        for (int j = -1; j <= 1; ++j){
            int temp = min(a[i], b[i + j]);
            ans += temp;
            a[i] -= temp;
            b[i + j] -= temp;
        }
    }

    printf("%d", ans);

    return 0;
}
