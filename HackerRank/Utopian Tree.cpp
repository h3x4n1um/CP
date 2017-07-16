#include <bits/stdc++.h>

using namespace std;

int T;

int main(){
    scanf("%d", &T);
    while(T-- > 0){
        int n, ans = 1;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i){
            if (i % 2 == 0) ++ans;
            else ans *= 2;
        }
        printf("%d\n", ans);
    }
    return 0;
}
