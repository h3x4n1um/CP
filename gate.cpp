#include <bits/stdc++.h>

using namespace std;

int n;
int current, previous;

int main(){
    freopen("gate.inp", "r", stdin);
    freopen("gate.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 4; i <= n; ++i){
        int temp = current;
        current = (current + previous + 1) % 10102014;
        previous = temp;
    }
    printf("%d", current);
    return 0;
}
