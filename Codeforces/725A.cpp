#include <bits/stdc++.h>

using namespace std;

int n, ans;
string s;

int main(){
    scanf("%d", &n);
    cin >> s;
    int pos = 0;
    while (s[pos] == '<'){
        ++ans;
        ++pos;
    }
    pos = n - 1;
    while (s[pos] == '>'){
        ++ans;
        --pos;
    }
    printf("%d", ans);
    return 0;
}
