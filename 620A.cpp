#include <bits/stdc++.h>

using namespace std;

int main(){
    int x[2], y[2];
    scanf("%d%d%d%d", &x[0], &y[0], &x[1], &y[1]);
    printf("%d", max(abs(x[0] - x[1]), abs(y[0] - y[1])));
    return 0;
}
