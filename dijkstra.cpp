#include <bits/stdc++.h>

#define oo 1000007

using namespace std;

int n, m, s, t, went[101], d[101], goback[101];
vector <pair <int, int> > q[101];

void dijstra(int k){
    memset(d, oo, sizeof d);
    d[s] = 0;
    while(true == true){
        int u = 0;
        for (int i = 1; i <= n; ++i){
            if (!went[i] && d[i] < d[u]) u = i;
        }
        if (u == 0 || u == t) break;
        went[u] = true;
        while (!q[u].empty()){
            if (d[q[u][0].first] > d[u] + q[u][0].second){
                d[q[u][0].first] = d[u] + q[u][0].second;
                goback[q[u][0].first] = u;
            }
            q[u].erase(q[u].begin());
        }
    }
}

void truy_vet(int k){
    vector <int> temp;
    while (k != 0){
        temp.push_back(k);
        k = goback[k];
    }
    for (int i = temp.size() - 1; i >= 1; --i){
        printf("%d -> ", temp[i]);
    }
    printf("%d", temp[0]);
}

int main(){
    freopen("dijkstra.inp", "r", stdin);
    freopen("dijkstra.out", "w", stdout);
    scanf("%d%d%d%d", &n, &m, &s, &t);
    for (int i = 0; i < m; ++i){
        int temp1, temp2, temp3;
        scanf("%d%d%d", &temp1, &temp2, &temp3);
        q[temp1].push_back(make_pair(temp2, temp3));
        q[temp2].push_back(make_pair(temp1, temp3));
    }
    dijstra(s);
    printf("%d\n", d[t]);
    truy_vet(t);
    return 0;
}
