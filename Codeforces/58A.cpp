#include <bits/stdc++.h>

using namespace std;

const char *check = "hello";

int ans;
string s;

int main(){
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        if (check[ans] == s[i]) ++ans;
    }
    if (ans < 5) printf("NO");
    else printf("YES");
    return 0;
}
