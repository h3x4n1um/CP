#include <bits/stdc++.h>

using namespace std;

int T;

void dijkstra(const int n, const vector <pair <int, int> > adj []){
    int d[105];
    set <pair <int, int> > f;
    for (int i = 1; i <= n; ++i){
        d[i] = 1000000007;
    }
    d[1] = 0;
    f.insert(make_pair(d[1], 1));
    while (!f.empty()){
        set <pair <int, int> >::iterator it = f.begin();
        int u = it->second;
        f.erase(it);
        for (int i = 0; i < adj[u].size(); ++i){
            int v = adj[u][i].first, w = adj[u][i].second;
            if (d[v] > d[u] + w){
                f.erase(make_pair(d[v], v));
                d[v] = d[u] + w;
                f.insert(make_pair(d[v], v));
            }
        }
    }
    if (d[n] < 1000000007) printf("%d\n", d[n]);
    else printf("Impossible\n");
}

int main(){
    scanf("%d", &T);
    for (int j = 1; j <= T; ++j){
        int n, m;
        vector <pair <int, int> > adj[105];
        scanf("%d%d", &n, &m);
        for (int i = 0; i < m; ++i){
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            adj[u].push_back(make_pair(v, w));
            adj[v].push_back(make_pair(u, w));
        }
        printf("Case %d: ", j);
        dijkstra(n, adj);
    }
    return 0;
}
