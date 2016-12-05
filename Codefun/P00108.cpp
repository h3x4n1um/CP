#define _USE_MATH_DEFINES

#include <bits/stdc++.h>

using namespace std;

double r, edge;
int x[5], y[5], a, b;

int main(){
    scanf("%lf", &r);
    for (int i = 1; i <= 4; ++i){
        scanf("%d%d", &x[i], &y[i]);
    }

    for (int i = 1; i <= 4; ++i){
        for (int j = i + 1; j <= 4; ++j){
            if (y[i] == y[j]) a = max(a, abs(x[i] - x[j]));
            else b = max(b, abs(y[i] - y[j]));
        }
    }
    edge = r * sqrt(2);

    if ((double) a * b > edge * (edge / 2)) printf(">");
    else if ((double) a * b < edge * (edge / 2)) printf("<");
    else printf("=");
    return 0;
}
