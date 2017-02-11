#include <bits/stdc++.h>

using namespace std;

string s;

int main(){
    cin >> s;
    while(s.find("WUB") != string::npos) s.replace(s.find("WUB"), 3, " ");
    while(s[0] == ' ') s.erase(s.begin());
    while(s[s.size() - 1] == ' ') s.erase(s.end() - 1);
    for (int i = s.size() - 1; i >= 0; --i){
        if (s[i] == s[i +1] && s[i] == ' ') s.erase(s.begin() + i);
    }
    cout << s;
    return 0;
}
