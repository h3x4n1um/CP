#include <bits/stdc++.h>

using namespace std;

int n, ans, temp, prev_temp;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        if (temp != prev_temp) ++ans;
        prev_temp = temp;
    }
    printf("%d", ans);
    return 0;
}
