#include <bits/stdc++.h>

using namespace std;

string s;
string ans;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("443A.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i){
        if (s[i] >= 97 && s[i] <= 122){
            if (ans.find(s[i]) == string::npos) ans += s[i];
        }
    }
    printf("%d", ans.size());
    return 0;
}
