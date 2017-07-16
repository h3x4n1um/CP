#include <bits/stdc++.h>

using namespace std;

long long n, k, pos;

int main(){
    scanf("%I64d%I64d", &n, &k);
    long long half = (long long) round((double) n / 2);
    (k <= half) ? printf("%I64d", 2 * k - 1) : printf("%I64d", 2 * (k - half));
    return 0;
}
