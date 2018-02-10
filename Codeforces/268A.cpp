#include <bits/stdc++.h>

using namespace std;

int n, ans;
pair <int, int> a[105];

int main(){
    #ifndef ONLINE_JUDGE
        freopen("268A.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &a[i].first, &a[i].second);
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            if (i != j && a[i].first == a[j].second) ++ans;
        }
    }
    printf("%d", ans);
    return 0;
}
