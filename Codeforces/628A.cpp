#include <bits/stdc++.h>

using namespace std;

int n, b, p, x, y;

int main(){
    scanf("%d%d%d", &n, &b, &p);
    y = n * p;
    while (n > 1){
        int temp = n / 2 * 2;
        x = x + (temp * b + temp / 2);
        n = n - temp / 2;
    }
    printf("%d %d", x, y);
    return 0;
}
