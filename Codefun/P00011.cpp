#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main(){
    scanf("%d%d%d", &a, &b, &c);
    double p = (double) (a + b + c) / 2;
    printf("%lf", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}
