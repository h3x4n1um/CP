#include <bits/stdc++.h>

using namespace std;

string s;
int a[30], ans;

int main(){
    for (int i = 0; i < 26; ++i){
        scanf("%d", &a[i]);
    }
    while (cin >> s){
        int temp = 0;
        for (int i = 0; i < s.size(); ++i){
            temp = max(temp, a[s[i] - 'a']);
        }
        temp = temp * s.size();
        ans = max(temp, ans);
    }
    printf("%d", ans);
    return 0;
}
