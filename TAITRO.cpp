#include <bits/stdc++.h>

using namespace std;

int n, ans;
int f[10005];
vector <pair <pair <int, int>, int > > a;

int main(){
    freopen("taitro.inp", "r", stdin);
    freopen("taitro.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int d, c, t;
        scanf("%d%d%d", &d, &c, &t);
        a.push_back(make_pair(make_pair(d, c), t));
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); ++i){
        f[i] = a[i].second;
        for (int j = 0; j < i; ++j){
            if (a[i].first.first > a[j].first.second) f[i] = max(f[i], f[j] + a[i].second);
        }
        ans = max(ans, f[i]);
    }
    printf("%d", ans);
    return 0;
}
