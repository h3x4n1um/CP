#include <bits/stdc++.h>

using namespace std;

int n, m;
int64_t ans;

int main(){
    scanf("%d%d", &n, &m);
    int s = 1;
    for (int i = 1; i <= m; ++i){
        int temp;
        scanf("%d", &temp);
        if (s <= temp) ans += temp - s;
        else ans += n - s + temp;
        s = temp;
    }
    printf("%I64d", ans);
    return 0;
}
