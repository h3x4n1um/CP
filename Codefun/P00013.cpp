#include <bits/stdc++.h>

using namespace std;

int n;

unsigned long long factorial(int q){
    unsigned long long temp = 1;
    for (int i = 1; i <= q; ++i){
        temp = temp * i;
    }
    return temp;
}

int main(){
    scanf("%d", &n);
    printf("%llu", factorial(n));
    return 0;
}
