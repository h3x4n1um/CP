#include <bits/stdc++.h>

using namespace std;

string s;
int upperCase, lowerCase;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("59A.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] >= 65 && s[i] <= 90) ++upperCase;
        else if (s[i] >= 97 && s[i] <= 122) ++lowerCase;
    }
    for (int i = 0; i < s.size(); ++i){
        if (lowerCase >= upperCase) s[i] = tolower(s[i]);
        else s[i] = toupper(s[i]);
    }
    cout << s;
    return 0;
}
