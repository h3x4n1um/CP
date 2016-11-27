#include <bits/stdc++.h>

using namespace std;

unsigned long long n;

int main(){
    scanf("%llu", &n);
    printf("%llu", (n * (n - 1) * (n - 2)) / 6);
    return 0;
}
