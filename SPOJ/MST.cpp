#define oo 1000000007

#include <bits/stdc++.h>

using namespace std;

int n, m;
vector <pair <int, int> > *adj;

unsigned long long prime(const int s){
    int d[n + 5], check = 0, back_trace[n + 5];
    unsigned long long ans = 0;
    bool went[n + 5];
    set <pair <int, int> > f;
    for (int i = 1; i <= n; ++i){
        d[i] = oo;
        went[i] = false;
    }
    d[s] = 0;
    f.insert(make_pair(d[s], s));
    while (!f.empty()){
        set <pair <int, int> >::iterator it = f.begin();
        int u = it->second;
        went[u] = true;
        ans += it->first;
        f.erase(it);
        ++check;
        for (int i = 0; i < adj[u].size(); ++i){
            int v = adj[u][i].first, w = adj[u][i].second;
            if (!went[v] && d[v] > w){
                f.erase(make_pair(d[v], v));
                d[v] = w;
                f.insert(make_pair(d[v], v));
                back_trace[u] = v;
            }
        }
    }
    if (check < n) return -1;
    return ans;
}

int main(){
    scanf("%d%d", &n, &m);
    adj = new vector <pair <int, int> > [n + 5];
    for (int i = 0; i < m; ++i){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    printf("%llu", prime(1));
    delete [] adj;
    return 0;
}
