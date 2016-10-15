#define oo 1000000007

#include <bits/stdc++.h>

using namespace std;

int n, m, k;
vector <pair <int, int> > adj[105];

void dijkstra(int temp, int start, int to){
    int d[105], back_trace[105];
    memset(d, oo, sizeof d);
    set <pair <int, int> > f;
    d[start] = 0;
    back_trace[start] = 0;
    f.insert(make_pair(d[start], start));
    while (!f.empty()){
        set <pair <int, int> >::iterator it = f.begin();
        f.erase(it);
        int u = it->second;
        if (u == to) break;
        for (int i = 0; i < adj[u].size(); ++i){
            int v = adj[u][i].first, w = adj[u][i].second;
            if (d[v] > d[u] + w){
                f.erase(make_pair(d[v], v));
                d[v] = d[u] + w;
                back_trace[v] = u;
                f.insert(make_pair(d[v], v));
            }
        }
    }
    if (temp == 0) printf("%d", d[to]);
    else{
        int tmp = to;
        vector <int> ans;
        while (tmp != 0){
            ans.push_back(tmp);
            tmp = back_trace[tmp];
        }
        printf("%d", ans.size());
        for (int i = ans.size() - 1; i >= 0; --i){
            printf(" %d", ans[i]);
        }
    }
    puts("");
}

int main(){
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < m; ++i){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    for (int i = 0; i < k; ++i){
        int temp, u, v;
        scanf("%d%d%d", &temp, &u, &v);
        dijkstra(temp, u, v);
    }
    return 0;
}
