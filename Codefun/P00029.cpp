#include <bits/stdc++.h>

using namespace std;

int a, b, c;
double cosa, cosb, cosc;

int main(){
    scanf("%d%d%d", &a, &b, &c);
    cosa = (double) (b * b + c * c - a * a) / (2 * b * c);
    cosb = (double) (a * a + c * c - b * b) / (2 * a * c);
    cosc = (double) (a * a + b * b - c * c) / (2 * a * b);
    double minN = min(cosa, min(cosb, cosc));
    if (minN > 0) printf("1");
    if (minN == 0) printf("0");
    if (minN < 0) printf("2");
    return 0;
}
