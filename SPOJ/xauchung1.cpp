#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int f[10001][10001];

int main(){
    #ifndef ONLINE_JUDGE
        freopen("xauchung.inp", "r", stdin);
        freopen("xauchung.out", "w", stdout);
    #endif // ONLINE_JUDGE
    cin >> s1 >> s2;
    s1 = ' ' + s1;
    s2 = ' ' + s2;
    for (int i = 1; i < s1.size(); ++i){
        for (int j = 1; j < s2.size(); ++j){
            if (s1[i] == s2[j]){
                f[i][j] = f[i - 1][j - 1] + 1;
            }
            else{
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
    printf("%d\n", f[s1.size() - 1][s2.size() - 1]);

    return 0;
}
