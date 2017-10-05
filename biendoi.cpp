#include <bits/stdc++.h>

using namespace std;

int n;
string s;
int f[1000005], g[1000005];

int main(){
    freopen("biendoi.inp", "r", stdin);
    freopen("biendoi.out", "w", stdout);
    scanf("%d", &n);
    cin >> s;
    f[0] = (s[0] != 'A');
    g[0] = (s[0] != 'B');
    for (int i = 1; i < s.size(); ++i){
        if (s[i] == 'A'){
            f[i] = f[i - 1];
            g[i] = min(f[i - 1], g[i - 1]) + 1;
        }
        else if (s[i] == 'B'){
            g[i] = g[i - 1];
            f[i] = min(f[i - 1], g[i - 1]) + 1;
        }
    }
    printf("%d", f[s.size() - 1]);
    return 0;
}
