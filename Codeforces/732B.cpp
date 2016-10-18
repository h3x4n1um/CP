#include <bits/stdc++.h>

int n, k, ans;
std::vector <int> a;

int main(){
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        a.push_back(temp);
    }
    for (int i = 1; i < n; ++i){
        if (a[i] + a[i - 1] < k){
            ans += (k - a[i - 1]) - a[i];
            a[i] = k - a[i - 1];
        }
    }
    printf("%d\n", ans);
    for (int i = 0; i < n; ++i){
        printf("%d ", a[i]);
    }
    return 0;
}
