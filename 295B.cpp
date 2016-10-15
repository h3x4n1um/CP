#define oo 1000000007LL

#include <bits/stdc++.h>

using namespace std;

int n;
long long d[505][505];
vector <int> check;
vector <long long> ans;

int main(){
    memset(d, oo, sizeof d);
    #ifndef ONLINE_JUDGE
        freopen("295B.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            int w;
            scanf("%d", &w);
            d[i][j] = w;
        }
    }
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        check.push_back(temp);
    }
    for (int k = check.size() - 1; k >= 0; --k){
        long long temp_ans = 0;
        for (int u = 1; u <= n; ++u){
            for (int v = 1; v <= n; ++v){
                int w = check[k];
                d[u][v] = min(d[u][v], d[u][w] + d[w][v]);
                d[v][u] = min(d[v][u], d[v][w] + d[w][u]);
            }
        }
        for (int i = check.size() - 1; i >= k; --i){
            for (int j = check.size() - 1; j >= k; --j){
                int u = check[i], v = check[j];
                temp_ans += d[u][v];
            }
        }
        ans.push_back(temp_ans);
    }
    for (int i = ans.size() - 1; i >= 0; --i){
        printf("%I64d ", ans[i]);
    }
    return 0;
}
