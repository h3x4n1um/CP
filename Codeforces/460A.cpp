#include <bits/stdc++.h>

using namespace std;

int n, m, cnt, ans;

int main(){
    scanf("%d%d", &n, &m);
    while (n > 0){
        --n;
        ++cnt;
        ++ans;
        if (ans % m == 0) ++n;
    }
    printf("%d", ans);
    return 0;
}
