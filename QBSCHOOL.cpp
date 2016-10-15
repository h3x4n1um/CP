#define oo 1000000007

#include <bits/stdc++.h>

using namespace std;

int n, m;
long long d[5005], path[5005];
vector <pair <int, int> > adj[5005];

void dijkstra(){
    memset(d, (long long) oo, sizeof d);
    set <pair <long long, int> > f;
    d[1] = 0;
    path[1] = 1;
    f.insert(make_pair(d[1], 1));
    while (!f.empty()){
        set <pair <long long, int> >::iterator it = f.begin();
        f.erase(it);
        int u = it->second;
        for (int i = 0; i < adj[u].size(); ++i){
            int v = adj[u][i].first, w = adj[u][i].second;
            if (d[v] == d[u] + w) path[v] += path[u];
            if (d[v] > d[u] + w){
                f.erase(make_pair(d[v], v));
                d[v] = d[u] + w;
                path[v] = path[u];
                f.insert(make_pair(d[v], v));
            }
        }
    }
    printf("%lld %lld", d[n], path[n]);
}

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        int k, u, v, l;
        scanf("%d%d%d%d", &k, &u, &v, &l);
        adj[u].push_back(make_pair(v, l));
        if (k == 2) adj[v].push_back(make_pair(u, l));
    }
    dijkstra();
    return 0;
}
