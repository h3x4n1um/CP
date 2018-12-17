#include <bits/stdc++.h>

using namespace std;

int n, a, b, c;
int f[4005];

int solve(int q){
    if (q == 0) return f[q];
    if (q < min(min(a, b), c)) return -1000000007;
    if (f[q] != 0) return f[q];
    return f[q] = max(max(solve(q - a), solve(q - b)), solve(q - c)) + 1;
}

int main(){
    scanf("%d%d%d%d", &n, &a, &b, &c);
    printf("%d", solve(n));
    return 0;
}
