#include <bits/stdc++.h>

using namespace std;

int a, b;

int gcd(int q, int p){
    while(p > 0){
        int temp = p;
        p = q % p;
        q = temp;
    }
    return q;
}

int main(){
    freopen("toigian.inp", "r", stdin);
    freopen("toigian.out", "w", stdout);
    scanf("%d%d", &a, &b);
    printf("%d %d", a / gcd(a, b), b / gcd(a, b));
    return 0;
}
