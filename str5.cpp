#include <bits/stdc++.h>

using namespace std;

int n, ans = 1005;
vector <string> s, _s;
int f[7][1005][1005], g[7][1005][1005], _f[7], _g[7];

int main(){
    freopen("str5.inp", "r", stdin);
    freopen("str5.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        string temp;
        cin >> temp;
        temp += temp;
        if (i == 0) s.push_back(temp);
        else{
            s.push_back(temp);
            reverse(temp.begin(), temp.end());
            _s.push_back(temp);
        }
    }
    for (int k = 1; k < s.size(); ++k){
        int temp = 0;
        for (int i = 0; i < s[0].size(); ++i){
            for (int j = 0; j < s[k].size(); ++j){
                if (s[0][i] == s[k][j]){
                    f[k][i][j] = f[k][i - 1][j - 1] + 1;
                    f[k][i][j] = min(f[k][i][j], (int) min(s[0].size(), _s[k].size()) / 2);
                    temp = max(temp, f[k][i][j]);
                }
            }
        }
        _f[k] = temp;
    }
    for (int k = 0; k < _s.size(); ++k){
        int temp = 0;
        for (int i = 0; i < s[0].size(); ++i){
            for (int j = 0; j < _s[k].size(); ++j){
                if (s[0][i] == _s[k][j]){
                    g[k + 1][i][j] = g[k + 1][i - 1][j - 1] + 1;
                    g[k + 1][i][j] = min(g[k + 1][i][j], (int) min(s[0].size(), _s[k].size()) / 2);
                    temp = max(temp, g[k + 1][i][j]);
                }
            }
        }
        _g[k + 1] = temp;
    }
    for (int k = 1; k < s.size(); ++k){
        ans = min(ans, max(_f[k], _g[k]));
    }
    printf("%d", ans);
    return 0;
}
