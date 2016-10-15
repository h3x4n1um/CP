#define oo 1000007

#include <bits/stdc++.h>

using namespace std;

int c;

//void dijkstra(const int s, const vector <pair <int, int> > adj[]){
//    int d[1007];
//    memset(d, oo, sizeof d);
//    d[s] = 0;
//    set <pair <int, int> > f;
//    f.insert(make_pair(d[s], s));
//    while (!f.empty()){
//        int u = f.begin()->second;
//        f.erase(f.begin());
//        for (int i = 0; i < adj[u].size(); ++i){
//            int v = adj[u][i].first, w = adj[u][i].second;
//            if (d[v] > d[u] + w){
//                f.erase(make_pair(d[v], v));
//                d[v] = d[u] + w;
//                f.insert(make_pair(d[v], v));
//            }
//        }
//    }
//}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("558.inp", "r", stdin);
        freopen("558.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d", &c);
    while (c-->0){
        int n, m;
        map <int, int> d[1007];
        bool found = false;
        scanf("%d%d", &n, &m);
        for (int i = 0; i < m; ++i){
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            d[u][v] = w;
        }
//        for (int i = 0; i < n; ++i){
//            dijkstra(i, adj);
//        }
        for (int k = 0; k < n; ++k){
            for (int u = 0; u < n; ++u){
                for (int v = 0; v < n; ++v){
                    d[u][v] = min(d[u][v], d[u][k] + d[k][v]);
                    d[v][u] = min(d[v][u], d[v][k] + d[k][u]);
                    if (!found && d[u][v] + d[v][u] < 0){
                        found = true;
                        printf("possible");
                    }
                }
            }
        }
        if (!found) printf("not possible");
        puts("");
    }
    return 0;
}
