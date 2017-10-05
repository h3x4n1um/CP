#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[100005], b[100005];
pair <int, int> ans;

int main(){
    freopen("cubics.inp", "r", stdin);
    freopen("cubics.out", "w", stdout);
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
        b[i] = b[i - 1] + a[i];
    }
    for (int i = 1; i <= n; ++i){
        for (int j = i; j <= n; ++j){
            if ((float) (b[j] - b[i - 1]) / (j - i + 1) == (float) k){
                if (ans.first < j - i + 1) ans = make_pair(j - i + 1, i);
            }
        }
    }
    if (ans.first > 0) printf("%d %d", ans.first, ans.second);
    else printf("%d", ans.first);
    return 0;
}
