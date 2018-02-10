#define oo 1000000007

#include <bits/stdc++.h>

using namespace std;

int n, x, y, z, f[1001][1001];
vector <int> a, b;

int main(){
    freopen("KHUVUON.INP", "r", stdin);
    freopen("KHUVUON.OUT", "w", stdout);

    a.push_back(oo);
    b.push_back(oo);

    scanf("%d%d%d%d", &n, &x, &y, &z);
    for (int i = 1; i <= n; ++i){
        int temp1, temp2;
        scanf("%d%d", &temp1, &temp2);
        for (int j = 1; j <= temp1; ++j) a.push_back(i);
        for (int j = 1; j <= temp2; ++j) b.push_back(i);
    }

    for (int i = 1; i < a.size(); ++i) f[i][0] = oo;
    for (int i = 1; i < b.size(); ++i) f[0][i] = oo;

    for (int i = 1; i < a.size(); ++i) {
        for (int j = 1; j < b.size(); ++j) {
            f[i][j] = min(f[i - 1][j] + y,
                          min(f[i][j - 1] + x,
                              f[i - 1][j - 1] + z * abs(a[i] - b[j])));
        }
    }

    printf("%d\n", f[a.size() - 1][b.size() - 1]);
    return 0;
}
