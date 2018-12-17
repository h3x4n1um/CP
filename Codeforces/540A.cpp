#include <bits/stdc++.h>

using namespace std;

int n;
int ans;
int a[1005], b[1005];

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) scanf("%1d", &a[i]);
    for (int i = 1; i <= n; ++i){
        scanf("%1d", &b[i]);
        ans += min(abs(a[i] - b[i]), 10 + min(a[i], b[i]) - max(a[i], b[i]));
    }
    printf("%d", ans);
    return 0;
}
