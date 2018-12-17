#include <bits/stdc++.h>

using namespace std;

int n;
int cnt[100005];
int64_t ans;
vector <int> a;
map <int, int64_t> f;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("455A.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        if (cnt[temp] == 0) a.push_back(temp);
        ++cnt[temp];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); ++i){
        int j;
        if (a[i] - a[i - 1 > 0 ? i - 1 : 0] > 1) j = i - 1;
        else j = i - 2;
        f[i] = max(f[j], f[j - 1]) + (int64_t) a[i] * cnt[a[i]];
        ans = max(ans, f[i]);
    }
    printf("%I64d", ans);
    return 0;
}
