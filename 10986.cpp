#define oo 1000007

#include <bits/stdc++.h>

using namespace std;

int N;

int dijkstra(const vector <pair <int, int> > adj[], int S, int T){
    int d[20005];
    set <pair <int, int> > f;
    memset(d, oo, sizeof d);
    d[S] = 0;
    f.insert(make_pair(d[S], S));
    while (!f.empty()){
        set <pair <int, int> >::iterator it = f.begin();
        f.erase(it);
        int u = it->second;
        if (u == T) break;
        for (int i = 0; i < adj[u].size(); ++i){
            int v = adj[u][i].first, w = adj[u][i].second;
            if (d[v] > d[u] + w){
                f.erase(make_pair(d[v], v));
                d[v] = d[u] + w;
                f.insert(make_pair(d[v], v));
            }
        }
    }
    return d[T];
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("10986.inp", "r", stdin);
        freopen("10986.out", "w", stdout);
    #endif // ONLINE_JUDGE
    int temp = 1;
    scanf("%d", &N);
    while (temp <= N){
        int n, m, S, T;
        vector <pair <int, int> > adj[20005];
        scanf("%d%d%d%d", &n, &m, &S, &T);
        for (int i = 0; i < m; ++i){
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            adj[u].push_back(make_pair(v, w));
            adj[v].push_back(make_pair(u, w));
        }
        printf("Case #%d: ", temp);
        if (dijkstra(adj, S, T) < oo) printf("%d\n", dijkstra(adj, S, T));
        else printf("unreachable\n");
        ++temp;
    }
    return 0;
}
