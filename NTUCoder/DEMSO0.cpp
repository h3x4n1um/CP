#include <bits/stdc++.h>

int n, ans;

int main(){
    scanf("%d", &n);
    for (int i = 5; i <= n; ++i){
        int temp = i;
        while (temp % 5 == 0){
            ++ans;
            temp = temp / 5;
        }
    }
    printf("%d", ans);
    return 0;
}
