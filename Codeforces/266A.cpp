#include <bits/stdc++.h>

using namespace std;

int n, ans;
string s;

int main(){
    scanf("%d", &n);
    cin >> s;
    for (int i = 1; i < s.size(); ++i){
        if (s[i] == s[i - 1]) ++ans;
    }
    printf("%d", ans);
    return 0;
}
