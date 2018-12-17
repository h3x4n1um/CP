#include <bits/stdc++.h>

using namespace std;

int n, x;
int ans;

int main(){
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; ++i){
        if (x % i == 0 && x / i <= n) ++ans;
    }
    printf("%d", ans);
    return 0;
}
