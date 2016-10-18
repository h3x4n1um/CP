#define oo 1000000007LL

#include <bits/stdc++.h>

using namespace std;

int c;

void Bellman_Ford(const int s, const vector <pair <int, int> > adj[], const int n, bool &found){
    int temp = 0;
    queue <int> q;
    long long d[1007];
    memset(d, oo, sizeof d);
    d[s] = 0;
    q.push(s);
    while (!q.empty()){
        if (temp == n * 2) break;
        int u = q.front();
        if (d[s] < 0){
            printf("possible");
            found = true;
            break;
        };
        q.pop();
        for (int i = 0; i < adj[u].size(); ++i){
            int v = adj[u][i].first, w = adj[u][i].second;
            if (d[v] > d[u] + w){
                d[v] = d[u] + w;
                q.push(v);
            }
        }
        ++temp;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("558.inp", "r", stdin);
        freopen("558.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d", &c);
    while (c-->0){
        int n, m;
        vector <pair <int, int> > adj[1007];
        bool found = false;
        scanf("%d%d", &n, &m);
        for (int i = 0; i < m; ++i){
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            adj[u].push_back(make_pair(v, w));
        }
        for (int i = 0; i < n; ++i){
            if (!found) Bellman_Ford(i, adj, n, found);
        }
        if (!found) printf("not possible");
        puts("");
    }
    return 0;
}
