#include <bits/stdc++.h>

using namespace std;

string s;
int f[1005][1005];

int main(){
    freopen("demngoac.inp", "r", stdin);
    freopen("demngoac.out", "w", stdout);
    cin >> s;
    f[0][0] = 1;
    for (int i = 1; i <= s.size(); ++i){
        for (int j = 0; j <= s.size(); ++j){
            if (s[i - 1] == '(') if (j > 0) f[i][j] += f[i - 1][j - 1];
            else f[i][j] = f[i - 1][j] + f[i - 1][j + 1];
            f[i][j] = f[i][j] % 2012;
        }
    }
    cout << f[s.size()][0];
    return 0;
}
