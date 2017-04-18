#include <bits/stdc++.h>

using namespace std;

int rar(int q){
    int res = 0;
    while(q > 0){
        res += q % 10;
        q /= 10;
    }
    if (res < 10) return res;
    return rar(res);
}

int n;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        printf("%d\n", rar(temp));
    }
    return 0;
}
