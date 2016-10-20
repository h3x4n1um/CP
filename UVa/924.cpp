#include <bits/stdc++.h>

int e, t;
std::vector <int> adj[2503];

void bfs(int from){
    std::queue <int> q;
    int went[2503], numberwent[2053];
    memset(went, -1, sizeof went);
    memset(numberwent, 0, sizeof numberwent);
    int d = 0, m = 0;
    q.push(from);
    went[from] = 0;
    while (!q.empty()){
        int u = q.front(), temp = 0;
        if (went[u] > -1) ++numberwent[went[u]];
        q.pop();
        for (int i = 0; i < adj[u].size(); ++i){
            int v = adj[u][i];
            if (went[v] == -1){
                went[v] = went[u] + 1;
                q.push(v);
            }
        }
        if (m < numberwent[went[u]] && went[u] != 0){
            m = numberwent[went[u]];
            d = went[u];
        }
    }
    if (d == 0) printf("%d", d);
    else printf("%d %d", m, d);
    printf("\n");
}

int main(){
    /*INIT*/
    freopen("924.inp", "r", stdin);
    freopen("924.out", "w", stdout);
    /*READ*/
    scanf("%d", &e);
    for (int k = 0; k < e; ++k){
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i){
            int u;
            scanf("%d", &u);
            adj[k].push_back(u);
        }
    }
    scanf("%d", &t);
    for (int k = 0; k < t; ++k){
        int from;
        scanf("%d", &from);
        bfs(from);
    }
    return 0;
}
