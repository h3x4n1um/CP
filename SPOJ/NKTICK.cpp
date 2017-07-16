#include <bits/stdc++.h>

using namespace std;

int n;
int t[60005], r[60005], f[60005];

int main(){
    #ifndef ONLINE_JUDGE
        freopen("NKTICK.inp", "r", stdin);
        freopen("NKTICK.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &t[i]);
    }
    for (int i = 1; i < n; ++i){
        scanf("%d", &r[i]);
    }
    for (int i = 1; i <= n; ++i){
        if (i == 1) f[i] = t[i];
        else f[i] = min(f[i - 1] + t[i], f[i - 2] + r[i - 1]);
    }
    printf("%d", f[n]);
    #ifndef ONLINE_JUDGE
        printf("\n");
        map <int, bool> ans;
        for (int i = 1; i <= n; ++i){
            printf("%d ", f[i]);
        }
        int pos = n;
        while(pos > 0){
            if (f[pos] - t[pos] == f[pos - 1]){
                ans[pos] = true;
                --pos;
            }
            else{
                --pos;
                ans[pos] = true;
            }
        }
        printf("\n");

        for (int i = 1; i <= n; ++i){
            if (ans[i]) printf("%d ", i);
        }
    #endif // ONLINE_JUDGE
    return 0;
}
