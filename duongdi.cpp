#include <bits/stdc++.h>

using namespace std;

int n, m;
int ans[35];
bool went[35];
vector <int> a[35];

void hamilton(int u, int q){
    ans[q] = u;
    went[u] = true;
    if (q == n){
        for (int i = 1; i <= q; ++i){
            printf("%d ", ans[i]);
        }
        exit(0);
    }
    for (int i = 0; i < a[u].size(); ++i){
        int v = a[u][i];
        if (!went[v]){
            hamilton(v, q + 1);
            went[v] = false;
        }
    }
}

int main(){
    freopen("duongdi.inp", "r", stdin);
    freopen("duongdi.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        int u, v;
        scanf("%d%d", &u, &v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    hamilton(1, 1);
    return 0;
}
