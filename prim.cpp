#define oo 1000007

#include <bits/stdc++.h>

using namespace std;

int n, m;
vector <pair <int, int> > adj[10005];

int prim(const int s){
    int d[10005], res = 0, cnt = 0;
    bool went[10005];
    set <pair <int, int> > f;
    for (int i = 1; i <= n; ++i){
        d[i] = oo;
        went[i] = false;
    }
    d[s] = 0;
    f.insert(make_pair(d[s], s));
    while (!f.empty()){
        set <pair <int, int> >::iterator it = f.begin();
        int u = it->second;
        went[u] = true;
        res += it->first;
        f.erase(it);
        ++cnt;
        for (int i = 0; i < adj[u].size(); ++i){
            int v = adj[u][i].first, w = adj[u][i].second;
            if (!went[v] && d[v] > w){
                f.erase(make_pair(d[v], v));
                d[v] = w;
                f.insert(make_pair(d[v], v));
            }
        }
    }
    if (cnt < n) return -1;
    else return res;
}

int main(){
    freopen("prim.inp", "r", stdin);
    freopen("prim.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    printf("%d", prim(1));
    return 0;
}
