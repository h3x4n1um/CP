#include <bits/stdc++.h>

using namespace std;

int T;

void bfs(const vector <int> a[], int f[], const int s){
    queue <int> q;
    q.push(s);
    f[s] = 0;
    while(!q.empty()){
        int u = q.front();
        for (int i = 0; i < a[u].size(); ++i){
            int v = a[u][i];
            if (f[v] == -1){
                f[v] = f[u] + 6;
                q.push(v);
            }
        }
        q.pop();
    }
}

int main(){
    scanf("%d", &T);
    while(T-- > 0){
        int n, m, s;
        int f[1005];
        vector <int> a[1005];
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; ++i) f[i] = -1;
        for (int i = 0; i < m; ++i){
            int u, v;
            scanf("%d%d", &u, &v);
            a[u].push_back(v);
            a[v].push_back(u);
        }
        scanf("%d", &s);
        bfs(a, f, s);
        for (int i = 1; i <= n; ++i){
            if (i != s) printf("%d ", f[i]);
        }
        puts("");
    }
    return 0;
}
