#include <bits/stdc++.h>

using namespace std;

int t;

int main(){
    freopen("somayman.inp", "r", stdin);
    freopen("somayman.out", "w", stdout);
    scanf("%d", &t);
    while(t-- > 0){
        int n, ans = 0;
        scanf("%d", &n);
        for (int i = (int) round(pow(10, n)); i <= pow(10, n + 1) - 1; ++i){
            bool check = false;
            char s[10];
            itoa(i, s, 10);
            for (int i = 1; i < n - 1; ++i){
                if (s[i] = '1' && s[i + 1] = '3'){
                    check = true;
                    break;
                }
            }
            if (!check) ++ans;
        }
        printf("%d\n", ans);
    }
    return 0;
}
