#include <bits/stdc++.h>

using namespace std;

int n, r;
int64_t ans;
vector <int> d;

int main(){
    freopen("appointment.inp", "r", stdin);
    freopen("appointment.out", "w", stdout);
    scanf("%d%d", &n, &r);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        d.push_back(temp);
    }
    for (int i = 0; i < d.size(); ++i){
        auto it = upper_bound(d.begin(), d.end(), d[i] + r);
        if (it != d.end()) ans += d.end() - it;
    }
    printf("%I64d", ans);
    return 0;
}
