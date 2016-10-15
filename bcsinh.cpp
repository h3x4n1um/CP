#include <bits/stdc++.h>

using namespace std;

int n, a[20];

void tang(int k){
    a[k] = 0;
    a[k - 1] += 1;
    if (a[k - 1] == 2) tang(k - 1);
}

int main(){
    freopen("bcsinh.inp", "r", stdin);
    freopen("bcsinh.out", "w", stdout);
    int k = 0;
    scanf("%d", &n);
    while (k != n){
        k = 0;
        for (int i = 0; i < n; ++i){
            if (a[i] == 1) ++k;
            printf("%d", a[i]);
        }
        if (k == n) break;
        printf("\n");
        ++a[n - 1];
        if (a[n - 1] == 2) tang(n - 1);
    }
    return 0;
}
