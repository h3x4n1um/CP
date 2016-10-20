#include <bits/stdc++.h>

int nc, cnt, ttl;

int main(){
    freopen("336.inp", "r", stdin);
    freopen("336.out", "w", stdout);
    while (scanf("%d", &nc), nc != 0){
        /*INIT*/
        std::map <int, std::vector <int> > adj;
        std::map <int, bool> pointed;
        int maxpoint = 0, from;
        /*READ*/
        for (int i = 0; i < nc; ++i){
            int u, v;
            scanf("%d%d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
            if (!pointed[u]){
                pointed[u] = true;
                ++maxpoint;
            }
            if(!pointed[v]){
                pointed[v] = true;
                ++maxpoint;
            }
        }
        /*PROCESS*/
        while (scanf("%d%d", &from, &ttl) && (from != 0 || ttl != 0)){
            /*INIT BFS*/
            ++cnt;
            int wentpoint = 1;
            std::map <int, int> went;
            std::queue <int> q;
            q.push(from);
            went[from] = 1;
            /*PROCESS BFS*/
            while (!q.empty()){
                int u = q.front();
                q.pop();
                if (went[u] == ttl + 1) break;
                for (int i = 0; i < adj[u].size(); ++i){
                    int v = adj[u][i];
                    if (went[v] == 0){
                        went[v] = went[u] + 1;
                        q.push(v);
                        ++wentpoint;
                    }
                }
            }
            /*WRITE*/
            if (adj[from].size() == 0) wentpoint = 0;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", cnt, maxpoint - wentpoint, from, ttl);
        }
    }
    return 0;
}
