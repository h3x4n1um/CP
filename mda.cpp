#include <bits/stdc++.h>

using namespace std;

int n, edge = 2;

int main(){
    freopen("mda.inp", "r", stdin);
    freopen("mda.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        edge = edge + edge - 1;
    }
    cerr << edge;
    printf("%I64d", (int64_t) edge * edge);
    return 0;
}
