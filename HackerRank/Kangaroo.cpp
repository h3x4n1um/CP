#include <bits/stdc++.h>

using namespace std;

int x1, x2, v1, v2, prev_dis = 1000000007, dis;

int main(){
    scanf("%d%d%d%d", &x1, &v1, &x2, &v2);
    dis = abs(x1 - x2);
    while (dis < prev_dis && dis != 0){
        prev_dis = dis;
        x1 = x1 + v1;
        x2 = x2 + v2;
        dis = abs(x1 - x2);
    }
    if (dis == 0) printf("YES");
    else printf("NO");
    return 0;
}
