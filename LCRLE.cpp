#include <bits/stdc++.h>

using namespace std;

string xe, ye;
map <char, int> x, y;
int f[1005][1005];

int convert(string &q, map <char, int> &p){
    stringstream out;
    out << q;
    q.clear();
    char c;
    int v;
    while(out >> c >> v){
        p[c] = v;
        q = q + c;
    }
    return 0;
}

int main(){
    freopen("LCRLE.inp", "r", stdin);
    freopen("LCRLE.out", "w", stdout);
    cin >> xe >> ye;
    convert(xe, x);
    convert(ye, y);
    xe = '~' + xe;
    ye = '!' + ye;
    for (int i = 1; i < xe.size(); ++i){
        for (int j = 1; j < ye.size(); ++j){
            if (xe[i] == ye[j]){
                f[i][j] = f[i - 1][j - 1] + min(x[xe[i]], y[ye[j]]);
                printf("%d %d\n", i, j);
            }
            else f[i][j] = max(f[i][j - 1], f[i - 1][j]);
        }
    }
    printf("%d", f[xe.size() - 1][ye.size() - 1]);
    return 0;
}
