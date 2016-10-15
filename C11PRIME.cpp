#include <bits/stdc++.h>

using namespace std;

long int n;

bool is_prime(long int k){
    if (k < 2) return false;
    for (long int i = 2; i <= (long int) floor(sqrt(k)); ++i){
        if (k % i == 0) return false;
    }
    return true;
}

int main(){
    scanf("%ld", &n);
    int temp = 2;
    while (pow(n, (double) 1 / temp) >= 2){
        if (pow(floor(pow(n, (double) 1 / temp)), temp) == n){
            if (is_prime((long int) floor(pow(n, (double) 1 / temp)))){
                printf("%ld %d", (long int) floor(pow(n, (double) 1 / temp)), temp);
                return 0;
            }
        }
        ++temp;
    }
    printf("%d", 0);
    return 0;
}
