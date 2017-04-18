#include <bits/stdc++.h>

using namespace std;

vector <long long> x, y;

int main(){
    freopen("hinhvuong.inp", "r", stdin);
    freopen("hinhvuong.out", "w", stdout);
    for (int i = 1; i <= 4; ++i){
        long long temp_x, temp_y;
        cin >> temp_x >> temp_y;
        if (find(x.begin(), x.end(), temp_x) == x.end()) x.push_back(temp_x);
        if (find(y.begin(), y.end(), temp_y) == y.end()) y.push_back(temp_y);
    }
    if (x.size() != 2 || y.size() != 2) cout << -1;
    else cout << (y[1] - y[0]) * (y[1] - y[0]);
    return 0;
}
