#include <bits/stdc++.h>

const int64_t modulo = 1000000007, base = 101;

using namespace std;

int64_t p0w[1000005], hashT[1000005], hashP;
string T, P;

int64_t getHashT(int i, int j) {
    return (hashT[j] - hashT[i - 1] * p0w[j - i + 1] + modulo * modulo) % modulo;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("SUBSTR.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    cin >> T >> P;
    int m = T.size(), n = P.size();
    T = " " + T;
    P = " " + P;
    p0w[0] = 1;
    for (int i = 1; i <= m; i++)
    	p0w[i] = (p0w[i - 1] * base) % modulo;
    for (int i = 1; i <= m; i++)
    	hashT[i] = (hashT[i - 1] * base + T[i] - 'a') % modulo;
    for (int i = 1; i <= n; i++)
    	hashP = (hashP * base + P[i] - 'a') % modulo;
    for (int i = 1; i <= m - n + 1; i++){
    	if (hashP == getHashT(i, i + n - 1)) printf("%d ", i);
    }
    return 0;
}
