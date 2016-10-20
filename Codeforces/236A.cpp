#include <bits/stdc++.h>

using namespace std;

int ans;
bool check[29];
string s;

int main(){
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        if (!check[s[i]]){
            check[s[i]] = true;
            ++ans;
        }
    }
    if (ans % 2 == 0) printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");
    return 0;
}
