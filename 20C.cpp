#define oo 100000007

#include <bits/stdc++.h>

using namespace std;

int n, m, back_trace[100007];
long long d[100007];
vector <pair <int, int> > adj[100007];

void dijkstra(){
    memset(d, (long long) oo * oo, sizeof d);
    set <pair <long long, int> > f;
    d[1] = 0;
    f.insert(make_pair(d[1], 1));
    while (!f.empty()){
        set <pair <long long, int> >::iterator it = f.begin();
        f.erase(it);
        int u = it->second;
        if (u == n) break;
        for (int i = 0; i < adj[u].size(); ++i){
            int v = adj[u][i].first, w = adj[u][i].second;
            if (d[u] + w < d[v]){
                f.erase(make_pair(d[v], v));
                d[v] = d[u] + w;
                back_trace[v] = u;
                f.insert(make_pair(d[v], v));
            }
        }
    }
    if (d[n] >= (long long) oo * oo) printf("-1");
    else{
        vector <int> ans;
        int temp = n;
        while (temp != 0){
            ans.push_back(temp);
            temp = back_trace[temp];
        }
        for (int i = ans.size() - 1; i >= 0; --i){
            printf("%d ", ans[i]);
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("20C.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    dijkstra();
    return 0;
}

