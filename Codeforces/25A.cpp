#include <bits/stdc++.h>

using namespace std;

int n;
int a[105];

int main(){
    #ifndef ONLINE_JUDGE
        freopen("25A.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
    }
    for (int i = 2; i <= n - 1; ++i){
        if ((a[i] + a[i - 1]) % 2 == 1 && (a[i + 1] + a[i]) % 2 == 1){
            printf("%d", i);
            return 0;
        }
    }
    if ((a[2] + a[1]) % 2 == 1) printf("1");
    else if ((a[n] + a[n - 1]) % 2 == 1) printf("%d", n);
    return 0;
}
