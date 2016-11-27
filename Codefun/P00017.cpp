#include <bits/stdc++.h>

using namespace std;

int a, b, c;

bool is_triangle(int p, int q, int r){
    if (p + q <= r) return false;
    if (p + r <= q) return false;
    if (q + r <= p) return false;
    return true;
}

int main(){
    scanf("%d%d%d", &a, &b, &c);
    if (is_triangle(a, b, c)) printf("YES");
    else printf("NO");
    return 0;
}
