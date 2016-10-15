#include <bits/stdc++.h>

using namespace std;

void Euclid_Extended(int a, int b){
    int xa = 1, xb = 0, ya = 0, yb = 1, counter = -1;
    while (b != 0){
        ++counter;
        int q = a / b, temp = a, xtemp = xb, ytemp = yb;
        a = b;
        b = temp % b;
        xb = xa - q*xtemp;
        yb = ya - q*ytemp;
        xa = xtemp;
        ya = ytemp;
    }
    printf("%d %d %d", xa, ya, a);
}

int main(){
    int a, b, n;
    //freopen("phantich.inp", "r", stdin);
    //freopen("phantich.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d%d", &a, &b);
        Euclid_Extended(a, b);
    }
    return 0;
}
