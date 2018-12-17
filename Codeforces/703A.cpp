#include <bits/stdc++.h>

using namespace std;

int n;
int _m, _c;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int m, c;
        scanf("%d%d", &m, &c);
        if (m > c) ++_m;
        else if (c > m) ++_c;
    }
    if (_m == _c) printf("Friendship is magic!^^");
    else if (_m > _c) printf("Mishka");
    else printf("Chris");
    return 0;
}
