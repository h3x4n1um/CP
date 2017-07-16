#include <bits/stdc++.h>

using namespace std;

int h, a, b;

int main(){
    freopen("ocsen.inp", "r", stdin);
    freopen("ocsen.out", "w", stdout);
    scanf("%d%d%d", &h, &a, &b);
    printf("%d", (int) ceil((float) h / (a - b)) - 1);
    return 0;
}
