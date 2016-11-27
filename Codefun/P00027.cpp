#include <bits/stdc++.h>

using namespace std;

int n;

bool is_prime(int q){
    if (q < 2) return false;
    for (int i = 2; i <= (int) sqrt(q); ++i){
        if (q % i == 0){
            if (is_prime(i)){
                printf("%d", i);
                return false;
            }
        }
    }
    return true;
}

int main(){
    scanf("%d", &n);
    if (is_prime(n)) printf("YES");
    return 0;
}
