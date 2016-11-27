#include <bits/stdc++.h>

using namespace std;

int n, m, check, ans[205];
bool went[205];
vector <pair <int, int> > adj[205];

void hamilton(const int cnt){
    if (cnt > n && check + (find(adj[ans[cnt - 1]].begin(), adj[ans[cnt - 1]].end(), ans[1]))->second){
        ans[cnt] = ans[1];
        for (int i = 1; i <= cnt; ++i){
            printf("%d ", ans[1]);
        }
        exit(0);
    }
    int u = ans[cnt - 1];
    for (int i = 0; i < adj[u].size(); ++i){
        int v = adj[u][i].first, c = adj[u][i].second;
        if (!went[v] && check + c >= 0){
            check += c;
            went[v] = true;
            hamilton(cnt + 1);
            went[v] = false;
            check -= c;
        }
    }
}

int main(){
    int s;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        int u, v, c;
        scanf("%d%d%d", &u, &v, &c);
        adj[u].push_back(make_pair(v, c));
        adj[v].push_back(make_pair(u, c));
        if (s < c){
            s = c;
            ans[1] = min(u, v);
        }
    }
    went[1] = true;
    hamilton(2);
    printf("%d", -1);
    return 0;
}
