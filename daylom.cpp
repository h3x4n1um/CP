#include <bits/stdc++.h>

using namespace std;

int n, a[101], ans;
pair <int, int> f[101];

int main(){
    freopen("daylom.inp", "r", stdin);
    freopen("daylom.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        int MAX = 0;
        for (int j = i; j >= 0; --j){
            if (a[i] < a[j] && MAX < f[j].first) MAX = f[j].first;
        }
        f[i].first = MAX + 1;
    }
    for (int i = n - 1; i >= 0; --i){
        int MAX = 0;
        for(int j = i; j < n; ++j){
            if (a[i] < a[j] && MAX < f[j].second) MAX = f[j].second;
        }
        f[i].second = MAX + 1;
        if (ans < f[i].first + f[i].second) ans = f[i].first + f[i].second;
    }
    printf("%d", ans - 1);
    return 0;
}
