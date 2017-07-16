#include <bits/stdc++.h>

using namespace std;

int n, ans;
int c[105];

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int temp;
        scanf("%d", &temp);
        ++c[temp];
    }
    for (int i = 1; i <= 100; ++i){
        ans += (int) floor((float) c[i] / 2);
    }
    printf("%d", ans);
    return 0;
}
