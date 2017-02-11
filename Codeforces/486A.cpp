#include <bits/stdc++.h>

using namespace std;

long long n;

int main(){
    scanf("%I64d", &n);
    n % 2 == 0 ? printf("%I64d", (long long) round((double) n / 2)) : printf("-%I64d", (long long) round((double) n / 2));
    return 0;
}
