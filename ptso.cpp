#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> a;

void pt(int m, int k){
    if (m == 0){
        for (int i = 0; i < a.size(); ++i) printf("%d ", a[i]);
        printf("\n");
        return;
    }
    for (int i = 1; i <= m; ++i){
        a.push_back(i);
        pt(m - i, i);
        a.erase(a.end() - 1);
    }
}

int main(){
    freopen("PTSO.inp", "r", stdin);
    freopen("PTSO.out", "w", stdout);
    scanf("%d", &n);
    pt(n, 1);
    return 0;
}
