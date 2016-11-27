#include <bits/stdc++.h>

using namespace std;

string s;

int main(){
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        for (int j = 0; j <= i; ++j){
            cout << s[j];
        }
        puts("");
    }
    for (int i = 0; i < s.size(); ++i){
        for (int j = 0; j <= s.size() - i - 1; ++j){
            cout << s[j];
        }
        puts("");
    }
    return 0;
}
