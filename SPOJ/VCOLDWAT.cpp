#include <bits/stdc++.h>

using namespace std;

int n, c;
vector <int> a[100007];
map <int, int> went;

void bfs(){
    queue <int> q;
    q.push(1);
    went[1] = 1;
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (int i = 0; i < a[u].size(); ++i){
            int v = a[u][i];
            if (went[v] == 0){
                went[v] = went[u] + 1;
                q.push(v);
            }
        }
    }
}

int main(){
    scanf("%d%d", &n, &c);
    for (int i = 0; i < c; ++i){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        a[u].push_back(v);
        a[u].push_back(w);
    }
    bfs();
    for (int i = 1; i <= n; ++i){
        printf("%d\n", went[i]);
    }
    return 0;
}
