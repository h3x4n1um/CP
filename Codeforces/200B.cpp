#include <bits/stdc++.h>

using namespace std;

int n;
float ans;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        float temp;
        scanf("%f", &temp);
        ans += temp /n;
    }
    printf("%.4f", ans);
    return 0;
}
