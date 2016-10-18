#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main(){
    scanf("%d", &n);
    while (n-- > 0){
        cin >> s;
        if (s.size() <= 10) cout << s;
        else cout << s[0] << s.size() - 2 << s[s.size() - 1];
        puts("");
    }
    return 0;
}
