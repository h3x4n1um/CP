#include <bits/stdc++.h>

using namespace std;

int first_leg, ans;
string s;

int main(){
    freopen("cowfind.in", "r", stdin);
    freopen("cowfind.out", "w", stdout);
    cin >> s;
    for (int i = 1; i < s.size(); ++i){
        if (s[i] == '(' && s[i - 1] == '(') ++first_leg;
        if (s[i] == ')' && s[i - 1] == ')') ans += first_leg;
    }
    printf("%d", ans);
    return 0;
}
