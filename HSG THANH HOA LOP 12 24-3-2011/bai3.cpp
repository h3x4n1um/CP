#include <bits/stdc++.h>

using namespace std;

const string handle = ".,;?!) ";

string s;

int main(){
    freopen("bai3.inp", "r", stdin);
    freopen("bai3.out", "w", stdout);
    while(getline(cin, s)){
        int i = 0;
        while(i < s.size()){
            while(s[i] == ' ' && handle.find(s[i + 1]) != string::npos) s.erase(s.begin() + i);
            while(s[i] == '(' && s[i + 1] == ' ') s.erase(s.begin() + i + 1);
            ++i;
        }
        cout << s << endl;
    }
    return 0;
}
