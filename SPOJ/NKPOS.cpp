#include <bits/stdc++.h>

using namespace std;

int n, m;
vector <int> a[205];
vector <int> w;

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        w.push_back(temp);
    }
    for (int i = 0; i < m; ++i){
        int u, v;
        scanf("%d%d", &u, &v);
        a[u].push_back(v);
        a[v].push_back(u);
    }

    return 0;
}
