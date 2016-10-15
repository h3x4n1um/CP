#include <bits/stdc++.h>

using namespace std;

long long int n;
int m, k;

long long int tribonacci(long long int k){
    vector <long long int> a;
    a.push_back(0);
    a.push_back(1);
    a.push_back(2);
    a.push_back(4);
    while (a.size() <= k) a.push_back(a[a.size() - 1] + a[a.size() - 2]+ a[a.size() - 3]);
    return a[n];
}

int main(){
    freopen("loco.inp", "r", stdin);
    freopen("loco.out", "w", stdout);
    scanf("%lld%d", &n, &m);
    printf("%lld", tribonacci(n) % m);
    return 0;
}
