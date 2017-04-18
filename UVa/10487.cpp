#include <bits/stdc++.h>

using namespace std;

int cnt;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("10487.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    int n;
    while(scanf("%d", &n), n != 0){
        int a[1005], m;
        for (int i = 1; i <= n; ++i){
            scanf("%d", &a[i]);
        }
        scanf("%d", &m);
        ++cnt;
        printf("Case %d:\n", cnt);
        for (int i = 1; i <= m; ++i){
            int temp, diff = 999999999, ans = 0;
            scanf("%d", &temp);
            for (int j = 1; j <= n; ++j){
                for (int k = j + 1; k <= n; ++k){
                    if (diff > abs(temp - (a[j] + a[k]))){
                        ans = a[j] + a[k];
                        diff = abs(temp - (a[j] + a[k]));
                    }
                }
            }
            printf("Closest sum to %d is %d.\n", temp, ans);
        }
    }
    return 0;
}
