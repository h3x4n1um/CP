#include <bits/stdc++.h>

#define oo 1000007

using namespace std;

vector <pair <int, int> > a[100];
int n, m, k, s, t, d[100];
bool went[100];

void dijkstra(int from, int to, int free){
    memset(d, oo, sizeof d);
    d[from] = 0;
    while (true == true){
        int u = 0;
        for (int i = 1; i <= n; ++i){
            if (d[u] > d[i] && !went[i]) u = i;
        }
        if (u == 0 || u == to) break;
        went[u] = true;
        for (int i = 0; i < a[u].size(); ++i){
            if (d[a[u][i].first] > d[u] + a[u][i].second) d[a[u][i].first] = d[u] + a[u][i].second;
        }
    }
}

int main(){
    freopen("freebus.inp", "r", stdin);
    freopen("freebus.out", "w", stdout);
    scanf("%d%d%d%d%d", &n, &m, &k, &s, &t);
    for (int i = 0; i < m; ++i){
        int temp1, temp2, temp3;
        scanf("%d%d%d", &temp1, &temp2, &temp3);
        a[temp1].push_back(make_pair(temp2, temp3));
        a[temp2].push_back(make_pair(temp1, temp3));
    }
    dijkstra(s, t, k);
    printf("%d", d[t]);
    return 0;
}
