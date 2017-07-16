#include <bits/stdc++.h>

using namespace std;

int n, cnt, m;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        cnt += temp;
    }
    scanf("%d", &m);
    for (int i = 1; i <= m; ++i){
        int l, r;
        scanf("%d%d", &l, &r);
        if (l >= cnt){
            printf("%d", l);
            return 0;
        }
        if (r >= cnt){
            printf("%d", cnt);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
