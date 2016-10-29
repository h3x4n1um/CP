#include <bits/stdc++.h>

int m, n, t, check;
long long ans;

int main(){
    freopen("khmai.inp", "r", stdin);
    freopen("khmai.out", "w", stdout);
    scanf("%d%d%d", &m, &n, &t);
    int temp = 0;
    while (check < n){
        ++ans;
        ++check;
        ++temp;
        if (temp % m == 0){
            ++check;
            temp = 0;
        }
    }
    printf("%lld", ans * t);
    return 0;
}
