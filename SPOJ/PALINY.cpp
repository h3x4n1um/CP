#define mod 1000000007
#define base1 256
#define base2 257
#define maxn 50005

#include<bits/stdc++.h>

using namespace std;

int n, s[maxn], t[maxn];
pair <int, int> base[maxn], hasht[maxn], hashs[maxn];

pair <int, int> gets(int i, int j){
    int tmp1 = (hashs[j].first - ((int64_t) hashs[i - 1].first * base[j - i + 1].first) % mod + mod) % mod;
    int tmp2 = (hashs[j].second - ((int64_t) hashs[i - 1].second * base[j - i + 1].second) % mod + mod) % mod;
    return pair <int, int> (tmp1, tmp2);
}

pair <int,int> gett(int i, int j){
    int tmp1 = (hasht[j].first - ((int64_t) hasht[i - 1].first * base[j - i + 1].first) % mod + mod) % mod;
    int tmp2 = (hasht[j].second - ((int64_t) hasht[i - 1].second * base[j - i + 1].second) % mod + mod) % mod;
    return pair <int, int>(tmp1, tmp2);
}

int check(int m){
    for (int i = 1; i <= n - m + 1; i++)
        if (gets(i, i + m - 1) == gett(n - (i + m - 1) + 1, n - i + 1)) return 1;
    return 0;
}

int solve(int u){
    int l = 1;
    int r = n;
    int cur = 0;
    while (l <= r){
        int m = (l + r) >> 1;
        int mm = m;
        if (mm % 2 != u) mm++;
        if (check(mm)) {
            cur = mm;
            l = m + 1;
        }
        else r = m - 1;
    }
    return cur;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("PALINY.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        char x;
        scanf("%c", &x);
        s[i] = int(x);
    }
    for (int i = 1; i <= n; i++)
        t[i] = s[n - i + 1];
    base[0].first = 1;
    base[0].second = 1;
    for (int i = 1; i <= n; i++){
        base[i].first = ((int64_t) base[i - 1].first * base1) % mod;
        base[i].second = ((int64_t) base[i - 1].second * base2) % mod;
    }
    for (int i = 1; i <= n; i++){
        hashs[i].first = ((int64_t) hashs[i - 1].first * base1 + s[i]) % mod;
        hashs[i].second = ((int64_t) hashs[i - 1].second * base2 + s[i]) % mod;
    }
    for (int i = 1; i <= n; i++){
        hasht[i].first = ((int64_t) hasht[i - 1].first * base1 + t[i]) % mod;
        hasht[i].second = ((int64_t) hasht[i - 1].second * base2 + t[i]) % mod;
    }
    printf("%d", max(solve(0), solve(1)));
    return 0;
}
