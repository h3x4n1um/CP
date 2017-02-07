#include <bits/stdc++.h>

using namespace std;

int open, close, depth;
string s;

int main(){
    freopen("typo.in", "r", stdin);
    freopen("typo.out", "w", stdout);
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == ')'){
            ++close;
            --depth;
        }
        if (s[i] == '('){
            ++open;
            ++depth;
        }
        if (depth == -1){
            printf("%d", close);
            return 0;
        }
        if (depth <= 1) open = 0;
    }
    printf("%d", open);
    return 0;
}
