#include <bits/stdc++.h>

using namespace std;

struct edge{
    public:
        int u, v, w;
};

struct ufds{
    public:
        void initSet(int ii){
            for (int i = 1; i <= ii; ++i) pSet[i] = i;
        }
        int findSet(int i){
            return (pSet[i] == i ? i : pSet[i] = findSet(pSet[i]));
        }
        void unionSet(int i, int j){
            pSet[findSet(i)] = findSet(j);
        }
        bool sameSet(int i, int j){
            return pSet[findSet(i)] == pSet[findSet(j)];
        }
    private:
        int pSet[10005];
};

bool cmp(edge p, edge q){
    return (p.w < q.w);
}

void kruskal(const vector <edge> a, const int n){
    int ans = 0;
    ufds graph;
    graph.initSet(n);
    for (int i = 0; i < a.size(); ++i){
        int u = a[i].u, v = a[i].v, w = a[i].w;
        if (!graph.sameSet(u, v)){
            graph.unionSet(u, v);
            ans += w;
        }
    }
    printf("%d", ans);
}

int n, m;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("QBMST.inp", "r", stdin);
        freopen("QBMST.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d%d", &n, &m);
    vector <edge> a;
    for (int i = 0; i < m; ++i){
        edge temp;
        scanf("%d%d%d", &temp.u, &temp.v, &temp.w);
        a.push_back(temp);
    }
    sort(a.begin(), a.end(), cmp);
    kruskal(a, n);
    return 0;
}
