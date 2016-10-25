#include <bits/stdc++.h>

using namespace std;

int n, m;
string s;

int main(){
    freopen("recovery.inp", "r", stdin);
    freopen("recovery.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for (int ii = 0; ii < m; ++ii){
        int i, j;
        scanf("%d%d", &i, &j);
        for (int jj = i; jj < j; jj += 2) s += "()";
    }
    cout << s;
    return 0;
}
