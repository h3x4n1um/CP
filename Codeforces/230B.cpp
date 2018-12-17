#include <bits/stdc++.h>

using namespace std;

int n;
bool prime_table[1000005];

bool isTPrime(int64_t q){
    if (q < 2) return false;
    int64_t half = sqrt(q);
    if (half * half != q) return false;
    return prime_table[half];
}

int main(){
    memset(prime_table, true, sizeof prime_table);
    for (int64_t i = 2; i <= 1000000; ++i){
        if (prime_table[i]){
            int64_t j = i * i;
            int64_t temp = i;
            while (j <= 1000000){
                prime_table[j] = false;
                ++temp;
                j = i * temp;
            }
        }
    }
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int64_t temp;
        scanf("%I64d", &temp);
        if (isTPrime(temp)) puts("YES");
        else puts("NO");
    }
    return 0;
}
