#include <bits/stdc++.h>

using namespace std;

int n, ans;
vector <long int> a;

long int gcd(long int p, long int q){
    while (q > 0){
        long int r = p % q;
        p = q;
        q = r;
    }
    return p;
}

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        long int temp;
        scanf("%ld", &temp);
        a.push_back(temp);
    }
    for (int i = 1; i < a.size(); ++i)
        if (gcd(a[i], a[i - 1]) != 1){
            ++ans;
            a.insert(a.begin() + i, 1);
        }
    printf("%d\n", ans);
    for (int i = 0; i < a.size(); ++i) printf("%ld ", a[i]);
    return 0;
}
