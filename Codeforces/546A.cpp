#include <bits/stdc++.h>

using namespace std;

int k, n, w;
unsigned long long cost;

int main(){
    scanf("%d%d%d", &k, &n, &w);
    for (int i = 1; i <= w; ++i){
        cost += k * i;
    }
    if (cost <= n) printf("0");
    else printf("%I64u", cost - n);
    return 0;
}
