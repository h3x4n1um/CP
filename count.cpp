#include <bits/stdc++.h>

using namespace std;

int n, ans;

bool is_prime(int q){
    if (q < 2) return false;
    for (int i = 2; i <= (int) sqrt(q); ++i){
        if (q % i == 0) return false;
    }
    return true;
}

int main(){
    freopen("count.inp", "r", stdin);
    freopen("count.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        if (is_prime(temp)) ++ans;
    }
    printf("%d", ans);
    return 0;
}
