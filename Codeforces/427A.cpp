#include <bits/stdc++.h>

using namespace std;

int n;
int sum, ans;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp;
        scanf("%d", &temp);
        sum += temp;
        if (sum < 0){
            ans += -sum;
            sum = 0;
        }
    }
    printf("%d", ans);
    return 0;
}
