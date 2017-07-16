#include <bits/stdc++.h>

using namespace std;

int n, pos;
int a[100005], f[100005];

/*0 1 4 3 2 3
0 1 3 5 7 9

0 1 2 2 7 5 2 1
0 1 3 4 6 7 10 14*/

int main(){
    #ifndef ONLINE_JUDGE
        freopen("Candies.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i){
        if (a[i] < a[i - 1]){
            f[i] += i - pos + f[i - 1] + 1;
        }
        else if (a[i] > a[i - 1]){
            if (a[i - 1] == 0) f[i] = 1;
            else f[i] = f[i - 1] + 2;
            pos = i;
        }
        else{
            f[i] = f[i - 1] + 1;
            pos = i;
        }
    }
    printf("%d", f[n]);
    return 0;
}
