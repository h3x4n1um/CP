#include <bits/stdc++.h>

using namespace std;

string s;

int main(){
    int check = 0;
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] < 97) ++check;
    }
    if (check == s.size() || (s[0] >= 97 && check == s.size() - 1)){
        for (int i = 0; i < s.size(); ++i){
            if (s[i] >= 97) s[i] -= 32;
            else s[i] += 32;
        }
    }
    cout << s;
    return 0;
}
