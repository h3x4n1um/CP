#include <bits/stdc++.h>

int n, b, d;
long int chosesize, ans;

int main(){
    scanf("%d%d%d", &n, &b, &d);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        if (temp < b) chosesize += temp;
    }
    ans = chosesize / d;
    printf("%ld", ans);
    return 0;
}
