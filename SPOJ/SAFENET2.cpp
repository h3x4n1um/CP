#include <bits/stdc++.h>

using namespace std;

struct edge{
    public:
        int u, v;
};

struct ufds{
    public:
        void initSet(int ii){
            for (int i = 1; i <= ii; ++i) pSet[i] = i;
        }
        bool sameSet(int i, int j){
            return pSet[findSet(i)] == pSet[findSet(j)];
        }
        int findSet(int i){
            return pSet[i] == i ? pSet[i] : pSet[i] = findSet(pSet[i]);
        }
        void unionSet(int i, int j){
            pSet[findSet(i)] = findSet(j);
        }
    private:
        int pSet[30007];
};

int n, m;
vector <edge> q;

void kruskal(){
    int cnt = 0;
    ufds a;
    a.initSet(n);
    for (int i = 0; i < q.size(); ++i){
        int u = q[i].u, v = q[i].v;
        if (!a.sameSet(u, v)){
            a.unionSet(u, v);
            ++cnt;
        }
        if (cnt == n - 1) break;
    }
    printf("%d", q.size() - cnt + 1);
}

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        edge temp;
        scanf("%d%d", &temp.u, &temp.v);
        q.push_back(temp);
    }
    kruskal();
    return 0;
}
