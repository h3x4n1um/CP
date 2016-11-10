#include <bits/stdc++.h>

int m, n, t, check;
long long ans;

int main(){
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
