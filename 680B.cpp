#include <bits/stdc++.h>

using namespace std;

int n, a, ans, f[102];

int main(){
    scanf("%d%d", &n, &a);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &f[i]);
    }
    for (int i = 0; i == i; ++i){
        if (a - i <= 0 && a + i > n) break;
        if (a - i <= 0) ans += f[a + i];
        if (a + i > n) ans += f[a - i];
        if (a - i > 0 && a + i <= n && f[a - i] == 1 && f[a + i] == 1){
            if (i == 0) ++ans;
            if (i != 0) ans += 2;
        }
    }
    printf("%d", ans);
    return 0;
}
