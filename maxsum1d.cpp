#include <bits/stdc++.h>

using namespace std;

int n, ans = -1000000007, prev_ans;

int main(){
    freopen("maxsum1d.inp", "r", stdin);
    freopen("maxsum1d.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        ans = max(ans, prev_ans);
        prev_ans + temp >= 0 ? prev_ans += temp : prev_ans = 0;
    }
    printf("%d", ans);
    return 0;
}
