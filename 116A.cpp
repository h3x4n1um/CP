#include <bits/stdc++.h>

int n, ans;

int main(){
    scanf("%d", &n);
    int temp = 0;
    for (int i = 0; i < n; ++i){
        int a, b;
        scanf("%d%d", &a, &b);
        temp = temp - a + b;
        ans = std::max(temp, ans);
    }
    printf("%d", ans);
    return 0;
}
