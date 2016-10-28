#include <bits/stdc++.h>

using namespace std;

struct edge{
    public:
        int u, v, w;
};

struct ufds{
    public:
        void initSet(int ii){
            for (int i = 0; i < ii; ++i) pSet[i] = i;
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
        int pSet[1005];
};

bool cmp(edge p, edge q){
    return (p.w < q.w);
}

void kruskal(const vector <edge> a, const int n){
    ufds graph;
    graph.initSet(n);
    for (int i = 0; i < a.size(); ++i){
        int u = a[i].u, v = a[i].v, w = a[i].w;
        if (!graph.sameSet(u, v)){
            graph.unionSet(u, v);

        }
    }
}

int n, m;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("11747.inp", "r", stdin);
        freopen("11747.out", "w", stdout);
    #endif // ONLINE_JUDGE
    while (scanf("%d%d", &n, &m), n != 0 || m != 0){
        vector <edge> a;
        for (int i = 0; i < m; ++i){
            edge temp;
            scanf("%d%d%d", &temp.u, &temp.v, &temp.w);
            a.push_back(temp);
        }
        sort(a.begin(), a.end(), cmp);
        kruskal(a, n);
        puts("");
    }
    return 0;
}
