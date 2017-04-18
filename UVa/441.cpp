#include <bits/stdc++.h>

using namespace std;

int n;
int d[11], a[15];

void combination(int k, int p){
    if (k > 6){
        for (int i = 1; i <= 5; ++i){
            printf("%d ", d[i]);
        }
        printf("%d", d[6]);
        puts("");
        return;
    }
    if (p > n) return;
    for (int i = p; i <= n; ++i){
        d[k] = a[i];
        combination(k + 1, i + 1);
    }
}

int main(){
    scanf("%d", &n);
    while(n != 0){
        for (int i = 1; i <= n; ++i){
            scanf("%d", &a[i]);
        }
        combination(1, 1);
        scanf("%d", &n);
        if (n > 0) puts("");
    }
    return 0;
}
