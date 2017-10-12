#include <bits/stdc++.h>

using namespace std;

string s;

int main(){
    freopen("doixung.inp", "r", stdin);
    freopen("doixung.out", "w", stdout);
    cin >> s;
    for (int i = 0; i < floor((float) s.size() / 2); ++i){
        if (s[i] != s[s.size() - (i + 1)]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
