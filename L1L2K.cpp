#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[100005], f[10005][10005];
vector <int> q, p;

void sub12(){
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            if ((int) abs(i - a[j]) <= k) f[i][j] = f[i - 1][j - 1] + 1;
            else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
        }
    }
    printf("%d", f[n][n]);
}

void sub3(){
    for (int i = 1; i <= n; ++i){
        for (int j = k; j >= 1; --j){
            if (a[i] + j >= 1 && a[i] + j <= n) q.push_back(a[i] + j);
        }
        q.push_back(a[i]);
        for (int j = 1; j <= k; ++j){
            if (a[i] - j >= 1 && a[i] - j <= n) q.push_back(a[i] - j);
        }
    }
    for (int i = 0; i < q.size(); ++i){
        auto it = lower_bound(p.begin(), p.end(), q[i]);
        if (it == p.end()) p.push_back(q[i]);
        else *it = q[i];
    }
    printf("%d", p.size());
}

int main(){
    freopen("L1L2K.inp", "r", stdin);
    freopen("L1L2K.out", "w", stdout);
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
    }
    if (k <= 3) sub3();
    else sub12();
    return 0;
}
