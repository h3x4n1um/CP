#include <bits/stdc++.h>

using namespace std;

int n, m;
bool went[35];
vector <int> a[35];
vector <int> ans;

void hamilton(const int u){
    ans.push_back(u);
    if (ans.size() == n){
        if (find(a[u].begin(), a[u].end(), 1) != a[u].end()){
            ans.push_back(1);
            for (int i = 0; i < ans.size(); ++i){
                printf("%d ", ans[i]);
            }
            return;
        }
    }
    went[u] = true;
    for (int i = 0; i < a[u].size(); ++i){
        int v = a[u][i];
        if (!went[v]){
            hamilton(v);
            went[v] = false;
            ans.erase(ans.end() - 1);
        }
    }
}

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; ++i){
        int u, v;
        scanf("%d%d", &u, &v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    hamilton(1);
    return 0;
}
