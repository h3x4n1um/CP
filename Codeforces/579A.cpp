#include <bits/stdc++.h>

using namespace std;

int x;
int ans;

int main(){
    scanf("%d", &x);
    while(x > 0){
        ans += x % 2;
        x /= 2;
    }
    printf("%d", ans);
    return 0;
}
