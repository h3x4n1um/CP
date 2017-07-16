#include <bits/stdc++.h>

int n, m, from;
std::vector <int> a[107], ans;
bool went[107];

void toposort(int u){
    went[u] = true;
    for (int i = 0; i < a[u].size(); ++i){
        int v = a[u][i];
        if (!went[v]){
            toposort(v);
        }
    }
    ans.push_back(u);
}

int main(){
    freopen("toposort.inp", "r", stdin);
    scanf("%d%d", &n, &m);
    bool in[n + 1];
    for (int i = 0; i < m; ++i){
        int temp1, temp2;
        scanf("%d%d", &temp1, &temp2);
        a[temp1].push_back(temp2);
        in[temp2] = false;
    }
    for (int i = 1; i <= n; ++i){
        if (in[i] && a[i].size() > 0) from = i;
    }
    toposort(from);
    for (int i = ans.size() - 1; i >= 0; --i){
        printf("%d ", ans[i]);
    }
    return 0;
}
