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
    for (int i = 0; i < n; ++i){
        if (a[i] >= a[k - 1] && a[i] > 0) ++ans;
    }
    printf("%d", ans);
    return 0;
}
