#include <bits/stdc++.h>

using namespace std;

const string check = "AOYEUIaoyeui";

string s;

int main(){
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        bool found = false;
        for (int j = 0; j < check.size(); ++j){
            if (s[i] == check[j]){
                found = true;
                break;
            }
        }
        if (!found){
            printf(".");
            if (s[i] < 97) cout << (char) (s[i] + 32);
            else cout << s[i];
        }
    }
    return 0;
}
