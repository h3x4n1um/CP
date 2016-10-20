#include <bits/stdc++.h>

int n, b5, b3, answer;

void solve(int k){
    if (k < 0) return;
    if (k == 0){
        printf("%d", answer);
        exit(0);
    }
    ++answer;
    solve(k - 5);
    solve(k - 3);
    --answer;
    if (k == n) printf("%d", -1);
}

int main(){
    scanf("%d" ,&n);
    solve(n);
    return 0;
}
