#include <bits/stdc++.h>

using namespace std;

unsigned long long int n, temp, minn;

int main(){
    freopen("minmax.inp", "r", stdin);
    freopen("minmax.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &temp);
        minn = min(n, temp);
    }
    cout << minn * (n - 1);
    return 0;
}
