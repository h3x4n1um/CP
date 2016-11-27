#include <bits/stdc++.h>

using namespace std;

int n, k;
long long ans;

int main(){
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i){
        ans = ans + (long long) i * (i + k);
    }
    printf("%lld", ans);
    return 0;
}
