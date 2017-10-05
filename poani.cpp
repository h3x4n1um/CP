#define C(n, k) fact(n) / (fact(k) * fact(n - k)) % 1000000007

#include <bits/stdc++.h>

using namespace std;

int n, k, ans;
vector <int> a;
int f[55];

int fact(int q){
    if (q <= 1) return f[q] = 1;
    if (f[q] > 0) return f[q];
    return f[q] = (q * fact(q - 1)) % 1000000007;
}

bool cmp(int a, int b){
    return a > b;
}

int main(){
    freopen("poani.inp", "r", stdin);
    freopen("poani.out", "w", stdout);
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size() - k + 1; ++i){
        ans = (ans + a[i] * C(a.size() - i - 1, (k - 1))) % 1000000007;
    }
    printf("%d", ans);
    return 0;
}
