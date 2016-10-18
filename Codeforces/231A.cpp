#include <bits/stdc++.h>

int n, ans;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp1, temp2, temp3;
        scanf("%d%d%d", &temp1, &temp2, &temp3);
        if (temp1 + temp2 + temp3 >= 2) ++ans;
    }
    printf("%d", ans);
    return 0;
}
