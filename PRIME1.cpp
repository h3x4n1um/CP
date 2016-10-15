#include <bits/stdc++.h>

using namespace std;

long int t, m, n;

bool is_prime(long int k){
    if (k < 2) return false;
    for (long int i = 2; i <= (long int) sqrt(k); ++i){
        if (k % i == 0) return false;
    }
    return true;
}

int main(){
    scanf("%ld", &t);
    for (long int i = 0; i < t; ++i){
        scanf("%ld%ld", &m, &n);
        for (long int j = m; j <= n; ++j){
            if (is_prime(j)) printf("%ld\n", j);
        }
        printf("\n");
    }
    return 0;
}
