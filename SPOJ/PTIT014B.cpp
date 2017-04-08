#include <bits/stdc++.h>

using namespace std;

int K;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("PTIT014B.inp", "r", stdin);
        freopen("PTIT014B.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d", &K);
    while(K-- > 0){
        int xa, ya, ua, va, xb, yb, ub, vb, ans = 1;
        scanf("%d%d%d%d%d%d%d%d", &xa, &ya, &ua, &va, &xb, &yb, &ub, &vb);
        if (vb < ya || yb > va) ans = 0;
        printf("%d\n", ans);
    }
    return 0;
}
