#include <bits/stdc++.h>

using namespace std;

int reverse(int q){
    int res = 0;
    while(q > 0){
        res = res * 10 + q % 10;
        q /= 10;
    }
    return res;
}

int i, j, k, ans;

int main(){
    scanf("%d%d%d", &i, &j, &k);
    for (int ii = i; ii <= j; ++ii){
        if (abs(ii - reverse(ii)) % k == 0) ++ans;
    }
    printf("%d", ans);
    return 0;
}
