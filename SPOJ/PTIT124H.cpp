#include <bits/stdc++.h>

using namespace std;

long long ans_x, ans_y;
vector <long long> x, y;

int main(){
    for (int i = 1; i <= 3; ++i){
        long long temp1, temp2;
        cin >> temp1 >> temp2;
        x.push_back(temp1);
        y.push_back(temp2);
    }
    if (x[0] == x[1]) ans_x = x[2];
    if (x[0] == x[2]) ans_x = x[1];
    if (x[1] == x[2]) ans_x = x[0];
    if (y[0] == y[1]) ans_y = y[2];
    if (y[0] == y[2]) ans_y = y[1];
    if (y[1] == y[2]) ans_y = y[0];
    cout << ans_x << ' ' << ans_y;
    return 0;
}
