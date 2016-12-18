#include <bits/stdc++.h>

using namespace std;

namespace Kruskal{
    /*IMPLEMEMT EDGE*/
    struct edge{
        public:
            int u, v, c;
            bool operator<(const edge q) const{
                return this->c < q.c;
            }
            bool operator>(const edge q) const{
                return this->c > q.c;
            }
            bool operator==(const edge q) const{
                return this->c == q.c;
            }
    };
    /*IMPLEMEMT UFDS*/
    struct ufds{
        public:
            ufds (int ii){
                this->init(ii);
            }
            void init(int ii){
                pSet = new int [ii + 1];
                for (int i = 1; i <= ii; ++i) pSet[i] = i;
            }
            int find(int i){
                return (pSet[i] == i ? i : pSet[i] = find(pSet[i]));
            }
            bool same(int i, int j){
                return pSet[find(i)] == pSet[find(j)];
            }
            void merge(int i, int j){
                pSet[find(i)] = find(j);
            }
            void clear(){
                delete [] pSet;
            }
        private:
            int *pSet;
    };
    /*INIT DATA*/
    int n, m;
    vector <edge> a;
    /*KRUSKAL ALGORITHM*/
    int Kruskal(){
        int res = 0;
        ufds q(n);
        for (int i = 0; i < a.size(); ++i){
            int u = a[i].u, v = a[i].v, c = a[i].c;
            if (!q.same(u, v)){
                q.merge(u, v);
                res += c;
            }
        }
        return res;
    }
    /*EXCUTE FUNCTION*/
    void excute(){
        scanf("%d%d", &n, &m);
        for (int i = 0; i < m; ++i){
            edge temp;
            scanf("%d%d%d", &temp.u, &temp.v, &temp.c);
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        Kruskal();
    }
}

namespace Prim{
    /*INIT DATA*/
    int n, m;
    vector <pair <int, int> > a[10007];
    /*PRIM ALGORITHM*/
    int Prim(){
        int d[10007], res = 0;
        set <pair <int, int> > f;
        for (int i = 1; i <= n; ++i){
            d[i] = 1000000007;
        }
        d[1] = 0;
        f.insert(make_pair(d[1], 1));
        while(!f.empty()){
            set <pair <int, int> >::iterator it = f.begin();
            int u = it->second;
            f.erase(it);
            for (int i = 0; i < a[u].size(); ++i){
                int v = a[u][i].first, c = a[u][i].second;
                if (d[v] > c){
                    f.erase(make_pair(d[v], v));
                    d[v] = c;
                    f.insert(make_pair(d[v], v));
                }
            }
        }
        for (int i = 1; i <= n; ++i){
            if (d[i] < 1000000007) res += d[i];
        }
        return res;
    }
    /*EXCUTE FUNCTION*/
    void excute(){
        scanf("%d%d", &n, &m);
        for (int i = 0; i < m; ++i){
            int u, v, c;
            scanf("%d%d%d", &u, &v, &c);
            a[u].push_back(make_pair(v, c));
        }
    }
}

int main(){
    freopen("QBMST.inp", "r", stdin);

    Kruskal::excute();

    printf("%d", Kruskal::Kruskal());
    return 0;
}
