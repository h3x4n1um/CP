#include <bits/stdc++.h>

using namespace std;

int n, L, a;
int t[100005], l[100005];

int ans;

int main(){
    scanf("%d%d%d", &n, &L, &a);
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &t[i], &l[i]);
    }
    int time = 0;
    for (int i = 1; i <= n; ++i){
        ans += (t[i] - time) / a;
        time = t[i] + l[i];
    }
    ans += (L - time) / a;
    printf("%d", ans);
    return 0;
}
