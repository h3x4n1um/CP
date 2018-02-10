#include <bits/stdc++.h>

using namespace std;

bool isPrime(int q){
    if (q < 2) return false;
    for (int i = 2; i <= (int) sqrt(q); ++i) if (q % i == 0) return false;
    return true;
}

int reverseInt(int q){
    int temp = 0;
    while (q > 0){
        temp = temp * 10 + q % 10;
        q = q / 10;
    }
    return temp;
}

int main(){
    freopen("timso.inp", "r", stdin);
    freopen("timso.out", "w", stdout);
    int p, q;
    scanf("%d%d", &p, &q);
    for (int i = p; i <= q; ++i) if (isPrime(reverseInt(i))) printf("%d\n", i);
    return 0;
}
