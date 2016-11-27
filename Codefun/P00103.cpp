#include <bits/stdc++.h>

using namespace std;

long long a1, b1, c1, a2, b2, c2, d, dx, dy;

int main(){
    scanf("%lld%lld%lld%lld%lld%lld", &a1, &b1, &c1, &a2, &b2, &c2);
    d = a1 * b2 - a2 * b1;
    dx = c1 * b2 - c2 * b1;
    dy = a1 * c2 - a2 * c1;
    if (d == 0){
        if (dx == 0 && dy == 0) printf("Inf");
        else printf("0");
    }
    else{
        double x = (double) dx / d;
        double y = (double) dy / d;
        printf("%.1lf %.1lf", x, y);
    }
    return 0;
}
