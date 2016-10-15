#include <bits/stdc++.h>

using namespace std;

int m, n;
string s;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("1225.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    scanf("%d", &m);
    for (int k = 0; k < m; ++k){
        ostringstream output;
        vector <int> c(10);
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) output << i;
        s = output.str();
        for (int i = 0; i < s.length(); ++i) ++c[s[i] - '0'];
        for (int i = 0; i < 9; ++i) printf("%d ", c[i]);
        printf("%d\n", c[9]);
    }
    return 0;
}
