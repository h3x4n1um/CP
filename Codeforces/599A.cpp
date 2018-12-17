#include <bits/stdc++.h>

using namespace std;

int d[5];
int ans;

int main(){
    for (int i = 1; i <= 3; ++i) scanf("%d", &d[i]);
    ans = min(d[1] + d[3] + d[2], 2 * (d[1] + d[2]));
    ans = min(ans, 2 * (d[3] + d[1]));
    ans = min(ans, 2 * (d[3] + d[2]));
    printf("%d", ans);
    return 0;
}
