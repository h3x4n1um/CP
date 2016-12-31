#include <bits/stdc++.h>

using namespace std;

int n, ans;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int p, q;
        scanf("%d%d", &p, &q);
        if (q - p >= 2) ++ans;
    }
    printf("%d", ans);
    return 0;
}
