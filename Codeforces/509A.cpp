#include <bits/stdc++.h>

using namespace std;

int n;
int64_t f[23];

int64_t fact(int q){
    if (f[q] > 0) return f[q];
    if (q < 2) return f[q] = 1;
    return f[q] = q * fact(q - 1);
}

int main(){
    scanf("%d", &n);
    printf("%I64d", fact(2 * (n - 1)) / (fact(n - 1) * fact(n - 1)));
    return 0;
}
