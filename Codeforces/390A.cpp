#include <bits/stdc++.h>

using namespace std;

int n;
int diff_x, diff_y;
int x[100005], y[100005];

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int temp_x, temp_y;
        scanf("%d%d", &temp_x, &temp_y);
        if (x[temp_x] == 0) ++diff_x;
        ++x[temp_x];
        if (y[temp_y] == 0) ++diff_y;
        ++y[temp_y];
    }
    printf("%d", min(diff_x, diff_y));
    return 0;
}
