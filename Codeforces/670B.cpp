#include <bits/stdc++.h>

using namespace std;

int n, ans[100000];
long int k;

int main(){
    scanf("%d%ld", &n, &k);
    for (int i = 0; i < n; ++i){
        scanf("%d", &ans[i]);
    }
    printf("%d", ans[k - ((long int) round(sqrt(2 * k - 7 / 4) + 1 / 2) * ((long int) round(sqrt(2 * k - 7 / 4) + 1 / 2) - 1) / 2 + 1)]);
    return 0;
}
