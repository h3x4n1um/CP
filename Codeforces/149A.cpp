#include <bits/stdc++.h>

using namespace std;

int k, ans;
int a[15];

int main(){
    scanf("%d", &k);
    for (int i = 1; i <= 12; ++i){
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + 13, [](int q, int p){return q >= p;});
    int height = 0;
    for (int i = 1; i <= 12; ++i){
        if (height >= k) break;
        height += a[i];
        ++ans;
    }
    if (height < k) ans = -1;
    printf("%d", ans);
    return 0;
}
