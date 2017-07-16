#include <bits/stdc++.h>

using namespace std;

long long n;
long long a[95];

int main(){
    freopen("fibn.inp", "r", stdin);
    freopen("fibn.out", "w", stdout);
    a[1] = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; ++i){
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("%lld", a[n]);
    return 0;
}
