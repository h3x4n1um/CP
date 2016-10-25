#include <bits/stdc++.h>

using namespace std;

struct edge{
    int u, v, w;
};

int n, m, ans;
bool went[10007];
vector <edge> a;

bool cmp(edge p, edge q){
    return (p.w < q.w);
}

void kruskal(){
    int temp = 0;
    while (!a.empty()){
        if (temp == n - 1) break;
        int u = a[0].u, v = a[0].v, w = a[0].w;
        if (!went[u] || !went[v]){
            printf("%d %d\n", u, v);
            went[u] = true;
            went[v] = true;
            ans += w;
            ++temp;
        }
        a.erase(a.begin());
    }
}

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        edge temp;
        scanf("%d%d%d", &temp.u, &temp.v, &temp.w);
        a.push_back(temp);
    }
    sort(a.begin(), a.end(), cmp);
    kruskal();
    printf("%d", ans);
    return 0;
}
