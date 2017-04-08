#include <bits/stdc++.h>

using namespace std;

long long Ax, Ay, Bx, By, Cx, Cy;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("P141SUMA.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
    long long temp = Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By);
    if (temp > 0) printf("LEFT");
    if (temp < 0) printf("RIGHT");
    if (temp == 0) printf("TOWARDS");
    return 0;
}
