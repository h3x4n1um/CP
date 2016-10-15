#include <bits/stdc++.h>

int n;

int main(){
    scanf("%d", &n);
    if (n % 7 == 6) printf("%d ", n / 7 * 2 + 1);
    else printf("%d ", n / 7 * 2);
    if (n % 7 >= 2) printf("%d", n / 7 * 2 + 2);
    if (n % 7 == 0) printf("%d", n / 7 * 2);
    if (n % 7 == 1) printf("%d", n / 7 * 2 + 1);
    return 0;
}
