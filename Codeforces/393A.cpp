#include <bits/stdc++.h>

using namespace std;

string s;
map <char, int> a;

int main(){
    cin >> s;
    for (int i = 0; i < s.size(); ++i) ++a[s[i]];
    printf("%d", min((a['n'] - 1) / 2, min(a['e'] / 3, min(a['i'], a['t']))));
    return 0;
}
