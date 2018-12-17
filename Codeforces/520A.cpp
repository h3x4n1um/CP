#include <bits/stdc++.h>

using namespace std;

int ans;
bool a[265];
string s;

int main(){
    scanf("%*d");
    cin >> s;
    for (int i = 0; i < s.size(); ++i){
        s[i] = toupper(s[i]);
        if (!a[s[i]]){
            a[s[i]] = true;
            ++ans;
        }
    }
    if (ans == 26) printf("YES");
    else printf("NO");
    return 0;
}
