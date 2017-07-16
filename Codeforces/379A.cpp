#include <bits/stdc++.h>

using namespace std;

int a, b, ans;

int main(){
    scanf("%d%d", &a, &b);
    ans += a;
    while (a >= b){
        ans += a / b;
        a = (a / b) + (a % b);
    }
    printf("%d", ans);
    return 0;
}
