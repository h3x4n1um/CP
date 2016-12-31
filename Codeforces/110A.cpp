#include <bits/stdc++.h>

using namespace std;

int ans;
string s;

int main(){
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == '4' || s[i] == '7') ++ans;
    }
    stringstream ss;
    ss << ans;
    string temp;
    ss >> temp;
    for (int i = 0; i < temp.size(); ++i){
        if (temp[i] != '4' && temp[i] != '7'){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
