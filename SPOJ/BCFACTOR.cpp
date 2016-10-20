#include <bits/stdc++.h>

using namespace std;

long int n;

long int divi(long int k, int j){
    int temp = 0;
    while (k % j == 0){
        ++temp;
        k = k / j;
    }
    return temp;
}

bool is_prime(long int k){
    if (k < 2) return false;
    for (long int i = 2; i <= (long int) sqrt(k); ++i){
        if (k % i == 0) return false;
    }
    return true;
}

void factor(int i){
    while (!is_prime(i) && n % i != 0) ++i;
    if (i > n) return;
    long int k = divi(n, i);
    printf("%ld %ld\n", &i, &k);
    n = n - k * i;
    factor(i + 1);
}

int main(){
    freopen("BCFACTOR.inp", "r", stdin);
    freopen("BCFACTOR.out", "w", stdout);
    scanf("%ld", &n);
    factor(2);
    return 0;
}
