#include <bits/stdc++.h>

using namespace std;

string s;
vector <string> ans;

bool check(){
    if (s[0] == '1' && s[1] == '0') return false;
    if (s[s.size() - 1] == '1' && s[s.size() - 2] == '0') return false;
    return true;
}

int main(){
    freopen("bai2.inp", "r", stdin);
    freopen("bai2.out", "w", stdout);
    cin >> s;
    ans.push_back(s);
    if (s[s.size() - 1] == '1' && s[s.size() - 2] == '1'){
        s[s.size() - 1] = '0';
        s[s.size() - 2] = '0';
        ans.push_back(s);
    }
    for (int i = 0; i < s.size() - 1; ++i){
        if (!check()){
            printf("Khong the bien doi duoc");
            return 0;
        }
        else if (s[i] == '1' && s[i + 1] == '1'){
            s[i] = '0';
            s[i + 1] = '0';
            ans.push_back(s);
        }
    }
    for (int i = 0; i < s.size() - 2; ++i){
        if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0'){
            s[i + 1] = '0';
            ans.push_back(s);
        }
    }
    for (auto i : ans) cout << i << endl;
    return 0;
}
