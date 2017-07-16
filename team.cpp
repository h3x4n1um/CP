#include <bits/stdc++.h>

using namespace std;

int n, ans;

int main(){
    freopen("team.inp", "r", stdin);
    freopen("team.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int check = 0;
        for (int j = 1; j <= 3; ++j){
            int temp;
            scanf("%d", &temp);
            check += temp;
        }
        if (check >= 2) ++ans;
    }
    printf("%d", ans);
    return 0;
}
