#include <bits/stdc++.h>

using namespace std;

int n, x, y, z, *a, *b;

int main(){
    freopen("KHUVUON.INP", "r", stdin);
    freopen("KHUVUON.OUT", "w", stdout);
    scanf("%d%d%d%d", &n, &x, &y, &z);
    a = new int [n + 1];
    b = new int [n + 1];
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &a[i], &b[i]);
    }

    delete [] a, b;
    return 0;
}
