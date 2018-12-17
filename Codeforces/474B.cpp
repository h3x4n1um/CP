#include <bits/stdc++.h>

using namespace std;

int n, m, length = 1;
int a[1000005];

int main(){
    #ifndef ONLINE_JUDGE
        freopen("474B.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        fill(a + length, a + length + temp, i);
        length += temp;
    }

    scanf("%d", &m);
    for (int i = 1; i <= m; ++i){
        int temp;
        scanf("%d", &temp);
        printf("%d\n", a[temp]);
    }
    return 0;
}
