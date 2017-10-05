#include <bits/stdc++.h>

using namespace std;

int t;
int f[100005];

int dp(int p){
    if (p <= 2) return f[p] = p - 1;
    if (f[p] < 1000000007) return f[p];
    if (p % 3 == 0) f[p] = min(f[p], dp(p / 3) + 1);
    if (p % 2 == 0) f[p] = min(f[p], dp(p / 2) + 1);
    f[p] = min(f[p], dp(p - 1) + 1);
    return f[p];
}

int main(){
    freopen("biendoi.inp", "r", stdin);
    freopen("biendoi.out", "w", stdout);
    scanf("%d", &t);
    for (int i = 1; i <= 100000; ++i){
        f[i] = 1000000007;
    }
    while(t-- > 0){
        int n;
        scanf("%d", &n);
        printf("%d\n", dp(n));
    }
    return 0;
}
