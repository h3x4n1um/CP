#define oo 1000000007
#define maxN 207

#include <bits/stdc++.h>

using namespace std;

int n, m, s, t, ans;
int a[maxN][maxN], f[maxN][maxN], g[maxN][maxN], trace[maxN];

void BuildG(){
    for (int u = 0; u <= n + m + 1; ++u){
        for (int v = 0; v <= n + m + 1; ++v){
            g[u][v] = 0;
        }
    }
    for (int u = 0; u <= n + m + 1; ++u){
        for (int v = 0; v <= n + m + 1; ++v){
            if (a[u][v] > f[u][v]) g[u][v] = a[u][v] - f[u][v];
            if (f[u][v] > 0) g[v][u] = f[u][v];
        }
    }
}

bool Find_Path(){
    BuildG();
    queue <int> q;

    for (int i = 1; i <= n + m + 1; ++i){
        trace[i] = -1;
    }
    q.push(s);

    while(!q.empty()){
        int u = q.front();

        q.pop();
        for (int v = 0; v <= n + m + 1; ++v){
            if (trace[v] == -1 && g[u][v] > 0){
                trace[v] = u;
                q.push(v);
                if (v == t) return true;
            }
        }
    }

    return false;
}

void Inc_Flow(){
    int v = t;
    int delta = oo;

    while (v != s){
        int u = trace[v];

        delta = min(delta, g[u][v]);
        v = u;
    }
    v = t;
    while (v != s){
        int u = trace[v];

        if (f[u][v] < a[u][v]) f[u][v] += delta;
        else f[v][u] -= delta;
        v = u;
    }
}

void Ford_Fulkerson(){
    while(Find_Path()) Inc_Flow();
}

int main(){
    freopen("phatqua.inp", "r", stdin);
    freopen("phatqua.out", "w", stdout);

    scanf("%d%d", &n, &m);
    t = n + m + 1;
    for (int i = 1; i <= n; ++i){
        int k;

        scanf("%d", &k);
        for (int j = 0; j < k; ++j){
            int temp;

            scanf("%d", &temp);

            a[i][temp + n] = 1;
            a[temp + n][t] = 1;
        }

        a[s][i] = 1;
    }

    Ford_Fulkerson();
    for (int i = 0; i <= n + m + 1; ++i){
        ans += f[s][i];
    }

    printf("%d\n", ans);
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if (f[i][j + n] == 1) printf("%d %d\n", i, j);
        }
    }
    return 0;
}
