#include <bits/stdc++.h>

using namespace std;

const int d[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int kq;

void split(int n){
    while (n > 9){
        kq += d[n % 10];
        n = n / 10;
    }
    kq += d[n];
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; ++i){
        split(i);
    }
    printf("%d", kq);
    return 0;
}
