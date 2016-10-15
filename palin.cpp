#include <bits/stdc++.h>

using namespace std;

vector <int> appear(26), notpalin;
string s;

int main(){
    cin >> s;
    while (s[0] == s[s.size() - 1] && s.size() - 1 != 0){
        s.erase(s.begin() + s.size() - 1);
        s.erase(s.begin());
    }
    cout << s;
    return 0;
}
