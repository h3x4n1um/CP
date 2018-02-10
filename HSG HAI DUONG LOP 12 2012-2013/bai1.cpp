#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    freopen("bai1.inp", "r", stdin);
    freopen("bai1.out", "w", stdout);
    scanf("%d", &n);
    int a = ceil(sqrt(n));
    if (a * a < n) printf("%d", (a + a + 1) * 2);
    else printf("%d", a * 4);
    return 0;
}
