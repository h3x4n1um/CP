#include <bits/stdc++.h>

using namespace std;

int n, k, b_charged, b_actual;

int main(){
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        if (i != k) b_actual += temp;
    }
    scanf("%d", &b_charged);
    b_actual /= 2;
    if (b_actual == b_charged) printf("Bon Appetit");
    else printf("%d", b_charged - b_actual);
    return 0;
}
