#include <bits/stdc++.h>

using namespace std;

int m, s;
string big, small;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("489C.inp", "r", stdin);
        freopen("489C.out", "w", stdout);
    #endif // ONLINE_JUDGE
    scanf("%d%d", &m, &s);
    if (s == 0 && m > 1){
        printf("-1 -1");
        return 0;
    }
    if ((double) s / m - 9 > 0){
        printf("-1 -1");
        return 0;
    }
    big.resize(m);
    small.resize(m);
    for (int i = 0; i < m; ++i){
        big[i] = '0' + min(s, 9);
        s -= min(s, 9);
    }
    reverse_copy(big.begin(), big.end(), small.begin());
    if (small[0] == '0'){
        for (int i = 0; i < m; ++i){
            if (small[i] != '0'){
                --small[i];
                small[0] = '1';
                break;
            }
        }
    }
    cout << small << ' ' << big;
    return 0;
}
