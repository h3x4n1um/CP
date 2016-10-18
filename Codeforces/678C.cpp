#include <bits/stdc++.h>

using namespace std;

unsigned long long int n, a, b, p, q, ans;

unsigned long long int scm(int i, int j){
    while (j > 0){
            unsigned long long int temp = i;
            i = j;
            j = temp % j;
        }
    return (a * b) / i;
}

int main(){
    cin >> n >> a >> b >> p >> q;
    ans = (n / a) * p + (n / b) * q;
    if (p > q) ans = ans - q * (n / scm(a, b));
    else ans = ans - p * (n / scm(a, b));
    cout << ans;
    return 0;
}
