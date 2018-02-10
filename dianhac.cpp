#include <bits/stdc++.h>

using namespace std;

int n, m;
vector <int> a;

int main(){
    freopen("dianhac.inp", "r", stdin);
    freopen("dianhac.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) a.push_back(i);
    for (int i = 1; i <= m; ++i){
        int temp;
        scanf("%d", &temp);
        a.erase(a.begin() + i);
        a.push_back(temp);
        printf("%d\n", a[0]);
    }
    return 0;
}
