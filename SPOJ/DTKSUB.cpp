#include<bits/stdc++.h>

using namespace std;

const int64_t base= 1000000007;

string s;
int n, k;
int64_t pow_[50001], hashS[50001];

int64_t get(int i, int x){
    return ((int64_t) (hashS[i + x - 1] - hashS[i - 1] * pow_[x] + base * base)) % base;
}

bool check(int x){
    vector <int64_t> V;
    for (int i = 1; i <= n - x + 1; i++)
        V.push_back(get(i, x));
    sort(V.begin(), V.end());
    int res = 1;
    for (int i = 1;i < V.size(); i++){
        if (V[i] == V[i-1]) res++;
        else res = 1;
        if (res >= k) return true;
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("DTKSUB.inp", "r", stdin);
    #endif // ONLINE_JUDGE

    scanf("%d%d", &n, &k);
    cin >> s;
    s = " " + s;
    pow_[0] = 1;
    for (int i = 1; i <= n; ++i){
        pow_[i] = ((int64_t) pow_[i - 1] * 26) % base;
        hashS[i] = ((int64_t) (hashS[i - 1] * 26 + s[i] - 'a')) % base;
    }
    if (k == 1){
        printf("%d", n);
        return 0;
    }
    int L = 1, R = n - k + 1;
    while (L <= R){
        int mid = (L + R) / 2;
        if (check(mid)) L = mid + 1;
        else R = mid - 1;
    }
    printf("%d", R);
    return 0;
}
