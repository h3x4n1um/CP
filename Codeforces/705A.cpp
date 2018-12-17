#include <bits/stdc++.h>

using namespace std;

int n;
string ans;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        if (i > 1) ans += "that ";
        ans += "I ";
        if (i % 2 == 0) ans += "love ";
        else ans += "hate ";
    }
    ans += "it";
    cout << ans;
    return 0;
}
