#include <bits/stdc++.h>

using namespace std;

bool eratosthenes[50005];

int m;

bool check(int q){
    if (eratosthenes[q]){
        if (q / 10 > 0) return check(q / 10);
        else return true;
    }
    else return false;
}

int main(){
    memset(eratosthenes, true, sizeof eratosthenes);
    eratosthenes[0] = eratosthenes[1] = false;
    for (int64_t i = 2; i < 50005; ++i){
        if (eratosthenes[i]){
            for (int64_t j = i * i; j < 50005; j += i) eratosthenes[j] = false;
        }
    }
    freopen("bai3.inp", "r", stdin);
    freopen("bai3.out", "w", stdout);
    scanf("%d", &m);
    int temp = m - 1;
    while(!check(temp)) --temp;
    printf("%d\n", temp);
    temp = m + 1;
    while(!check(temp)) ++temp;
    printf("%d", temp);
    return 0;
}
