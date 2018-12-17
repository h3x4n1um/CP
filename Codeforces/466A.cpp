#include <bits/stdc++.h>

using namespace std;

int n, m, a, b;

int main(){
    scanf("%d%d%d%d", &n, &m, &a, &b);
    if (a - (float) b / m > 0){
        int temp = floor((float) n / m);
        printf("%d", temp * b + min((n - temp * m) * a, b));
    }
    else printf("%d", n * a);
    return 0;
}
