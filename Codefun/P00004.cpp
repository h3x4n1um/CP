#include <bits/stdc++.h>

int n;

int main(){
    scanf("%d", &n);
    printf("%d", n - ((int) floor((n - 1) / 2) + 1));
    return 0;
}
