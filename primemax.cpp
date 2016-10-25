#include <bits/stdc++.h>

using namespace std;

int n;
long prime;
vector <long> a;

bool is_prime(long m){
    if (m < 2) return false;
    for (int i = 2; i <= (int) sqrt(m); ++i){
        if (m % i == 0) return false;
    }
    return true;
}

int main(){
    freopen("primemax.inp", "r", stdin);
    freopen("primemax.out", "w", stdout);
    long temp;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%ld", &temp);
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    for (int i = n - 1; i >= 0; --i){
        if(is_prime(a[i])){
            prime = a[i];
            break;
        }
    }
    printf("%ld\n%ld", prime, a[0]);
    return 0;
}
