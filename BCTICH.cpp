#include <bits/stdc++.h>

using namespace std;

int n, count_var, k, kq;

int main(){
    freopen("BCPTICH.inp", "r", stdin);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        kq = 0;
        scanf("%d%d", &count_var, &k);
        for (int j = 2; j <= (int) sqrt(2 * k); ++j){
            if (2 * k % j == 0){
                if ((j - 1 + (2 * k / j)) % 2 == 0) ++kq;
            }
        }
        printf("%d %d\n", count_var, kq);
    }
    return 0;
}
