#include <bits/stdc++.h>

int n, k, *a, ans;

int main(){
    int temp = 0;
    scanf("%d%d", &n, &k);
    a = new int [n];
    for (int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        if (a[i] + k <= 5) ++temp;
        if (temp == 3){
            temp = 0;
            ++ans;
        }
    }
    printf("%d", ans);
    delete [] a;
    return 0;
}
