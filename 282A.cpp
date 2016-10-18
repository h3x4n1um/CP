#include <bits/stdc++.h>

using namespace std;

int n, ans;
string s;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n ; ++i){
        cin >> s;
        if (s[1] == '+') ++ans;
        else --ans;
    }
    printf("%d", ans);
    return 0;
}
