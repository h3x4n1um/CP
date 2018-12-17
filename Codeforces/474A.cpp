#include <bits/stdc++.h>

using namespace std;

const string magic[] = {"qwertyuiop" ,"asdfghjkl;", "zxcvbnm,./"};

char d;
int _d;
string s;

int main(){
    scanf("%c", &d);
    if (d == 'L') _d = 1;
    else _d = -1;
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        for (int j = 0; j < 3; ++j){
            bool out = false;
            for (int k = 0; k < magic[j].size(); ++k){
                if (s[i] == magic[j][k]){
                    out = true;
                    printf("%c", magic[j][k + _d]);
                    break;
                }
            }
             if (out == true) break;
        }
    }
    return 0;
}
