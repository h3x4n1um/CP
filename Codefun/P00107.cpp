#include <bits/stdc++.h>

using namespace std;

int x[5], y[5];
double x_ratio, y_ratio;
pair <int, int> ab, bc;

int main(){
    for (int i = 1; i <= 3; ++i){
        scanf("%d%d", &x[i], &y[i]);
    }
    /*A = (x1; y1) B = (x2; y2) C = (x3; y3)*/
    ab = make_pair(x[2] - x[1], y[2] - y[1]);
    bc = make_pair(x[3] - x[2], y[3] - y[2]);
    x_ratio = (double) ab.first / bc.first;
    y_ratio = (double) ab.second / bc.second;

    if (x_ratio == y_ratio) printf("1");
    else printf("0");

    return 0;
}
