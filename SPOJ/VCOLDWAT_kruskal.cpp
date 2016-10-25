#include <bits/stdc++.h>

using namespace std;

struct edge{
    int u, v, w;
};

int n, c;
priority_queue <edge> a;

void kruskal(){
    for (int i = 0; i < )
}

int main(){
    scanf("%d%d", &n, &c);
    for (int i = 0; i < c; ++i){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        a[u].push_back(v);
        a[u].push_back(w);
    }
    kruskal();
    return 0;
}
