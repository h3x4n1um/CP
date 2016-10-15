#include <bits/stdc++.h>

int n, m, k, ans = 1000007;
bool storage[1000007];
std::vector <std::pair <int, int> > a[1000007];
std::vector <int> b;

int main(){
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < m; ++i){
        int u, v, l;
        scanf("%d%d%d", &u, &v, &l);
        a[u].push_back(std::make_pair(v,l));
        a[v].push_back(std::make_pair(u,l));
    }
    for (int i = 0; i < k; ++i){
        int temp;
        scanf("%d", &temp);
        b.push_back(temp);
        storage[temp] = true;
    }
    for (int i = 0; i < k; ++i){
        for (int j = 0; j < a[b[i]].size(); ++j){
            if (!storage[a[b[i]][j].first] && a[b[i]][j].second < ans) ans = a[b[i]][j].second;
        }
    }
    if (ans == 1000007) printf("-1");
    else printf("%d", ans);
    return 0;
}
