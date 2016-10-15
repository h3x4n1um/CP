#include <bits/stdc++.h>

using namespace std;

struct bag{
    int w;
    int v;
    int a;
};

int n, m, f[101[101];
bag q[101];

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i){
        scanf("%d%d%d", &q[i].w, &q[i].v, &q[i].a);
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            f[i][j] = f[i - 1][j];

        }
    }
    return 0;
}
