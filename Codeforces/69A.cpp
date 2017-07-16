#include <bits/stdc++.h>

using namespace std;

int sum_x, sum_y, sum_z, n;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if (sum_x == sum_y && sum_y == sum_z && sum_z == 0) printf("YES");
    else printf("NO");
    return 0;
}
