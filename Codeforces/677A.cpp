#include <bits/stdc++.h>

using namespace std;

int n, h, ans;

int main(){
    scanf("%d%d", &n, &h);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        if (temp > h) ans += 2;
        else ++ans;
    }
    printf("%d", ans);
    return 0;
}
