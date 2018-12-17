#include <bits/stdc++.h>

using namespace std;

int n, m;
int _min, ans;

int main(){
    scanf("%d%d", &n, &m);
    if (n < m) printf("-1");
    else{
        _min = ceil((double) n / 2);
        ans = (int) ceil((double) _min / m) * m;
        printf("%d", ans);
    }
    return 0;
}
