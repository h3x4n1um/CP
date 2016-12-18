#include <bits/stdc++.h>

using namespace std;

int n, m;
vector <int> ans;
map <int, vector <int> > a;
map <int, bool> went, child;

void dfs(const int s){
    ans.push_back(s);
    went[s] = true;
    for (int i = 0; i < a[s].size(); ++i){
        int v = a[s][i];
        if (!went[v]) dfs(v);
    }
}

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        int u, v;
        scanf("%d%d", &u, &v);
        a[u].push_back(v);
        child[v] = true;
    }
    for (int i = 1; i <= n; ++i){
        if (!child[i]) dfs(i);
    }
    if (ans.size() == n){
        for (int i = 0; i < ans.size(); ++i){
            printf("%d ", ans[i]);
        }
    }
    else printf("Sandro fails.");
    return 0;
}
