#include <bits/stdc++.h>

using namespace std;

string s1, s2, ans;

int main(){
    cin >> s1 >> s2;
    ans = s1;
    for (int i = 0; i < s1.size(); ++i){
        int temp = (s1[i] - '0') + (s2[i] - '0');
        if (temp % 2 == 0) ans[i] = '0';
        else ans[i] = '1';
    }
    cout << ans;
    return 0;
}
