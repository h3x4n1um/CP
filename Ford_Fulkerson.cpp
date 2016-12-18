#define oo 1000000007
#define maxN 1007

#include <bits/stdc++.h>

using namespace std;

int n, m, s, t, ans;
int a[maxN][maxN], f[maxN][maxN], trace[maxN], delta[maxN];

bool Find_Path(){
    queue <int> q;

    for (int i = 1; i <= n; ++i){
        trace[i] = 0;
    }
    delta[s] = oo;
    trace[s] = s;
    q.push(s);

    while(!q.empty()){
        int u = q.front();

        q.pop();
        for (int v = 1; v <= n; ++v){
            if (trace[v] == 0){
                if (a[u][v] - f[u][v] > 0){
                    trace[v] = u;
                    delta[v] = min(delta[u], a[u][v] - f[u][v]);
                    q.push(v);
                }
                else if (f[v][u] > 0){
                    trace[v] = -u;
                    delta[v] = min(delta[u], f[v][u]);
                    q.push(v);
                }

                if (trace[v] != 0 && v == t) return true;
            }
        }
    }

    return false;
}

void Inc_Flow(){
    int v = t;
    while (v != s){
        int u = trace[v];

        if (u > 0) f[u][v] += delta[t];
        else{
            u = -u;
            f[v][u] -= delta[t];
        }
        v = u;
    }
}

void Ford_Fulkerson(){
    while (Find_Path()) Inc_Flow();
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Ford_Fulkerson.inp", "r", stdin);
    #endif // ONLINE_JUDGE

    scanf("%d%d%d%d", &n, &m, &s, &t);
    for (int i = 0; i < m; ++i){
        int u, v, w;

        scanf("%d%d%d", &u, &v, &w);
        a[u][v] = w;
    }

    Ford_Fulkerson();
    for (int i = 1; i <= n; ++i){
        ans += f[s][i];
    }


    printf("Maximum Flow: %d\nMinimum Cut:\n", ans);
    for (int i = 1; i <= n; ++i){
        if (trace[i] != 0){
            for (int j = 1; j <= n; ++j){
                if (trace[j] == 0 && a[i][j] > 0){
                    printf("%d %d\n", i, j);
                }
            }
        }
    }
    return 0;
}
