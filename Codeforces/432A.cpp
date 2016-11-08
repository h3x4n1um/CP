#include <bits/stdc++.h>

int n, k, ans;

int main(){
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        if (temp + k <= 5) ++ans;
    }
    printf("%d", ans / 3);
    return 0;
}
