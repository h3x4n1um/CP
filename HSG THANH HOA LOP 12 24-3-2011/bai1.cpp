#include <bits/stdc++.h>

using namespace std;

int64_t n, temp, prevTemp, d;

int main(){
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    scanf("%I64d", &n);
    scanf("%I64d %I64d", &prevTemp, &temp);
    d = temp - prevTemp;
    for (int i = 3; i <= n; ++i){
        prevTemp = temp;
        scanf("%I64d", &temp);
        if (temp - prevTemp != d){
            printf("%d", 0);
            return 0;
        }
    }
    printf("%d", 1);
    return 0;
}
