#include <bits/stdc++.h>

using namespace std;

int n, t;
string s;

int main(){
    scanf("%*d%d", &t);
    cin >> s;
    for (int i = 0; i < t; ++i){
        map <int, bool> check;
        for (int j = 0; j < s.size(); ++j){
            if (s[j] == 'B' && s[j + 1] == 'G' && !check[j]){
                swap(s[j], s[j + 1]);
                check[j + 1] = true;
            }
        }
    }
    cout << s;
    return 0;
}
