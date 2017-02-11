#include <bits/stdc++.h>

using namespace std;

vector <long long> a, b;
long long n, m, ans, lcm_a, gcd_b;

long long gcd(long long q, long long p){
    while(p > 0){
        long long temp = p;
        p = q % p;
        q = temp;
    }
    return q;
}

long long lcm(long long q, long long p){
    return q * p / gcd(q, p);
}

int main(){
    scanf("%lld%lld", &n, &m);
    for (int i = 0; i < n; ++i){
        long long temp;
        scanf("%lld", &temp);
        a.push_back(temp);
    }
    for (int i = 0; i < m; ++i){
        long long temp;
        scanf("%lld", &temp);
        b.push_back(temp);
    }
    lcm_a = accumulate(a.begin(), a.end(), a[0], lcm);
    gcd_b = accumulate(b.begin(), b.end(), b[0], gcd);
    for (long long i = lcm_a; i <= gcd_b; ++i){
        if (i % lcm_a == 0 && gcd_b % i == 0) ++ans;
    }
    printf("%lld", ans);
    return 0;
}
