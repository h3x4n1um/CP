#include <bits/stdc++.h>

using namespace std;

//char s[300001];
string s;
unsigned long long int ans;

int main(){
    //scanf("%s", s);
    cin >> s;
    for (int i = s.size() - 1; i >= 0; --i){
        int temp1 = s[i] - '0' + (s[i - 1] - '0') * 10, temp2 = s[i] - '0';
        if (temp1 % 4 == 0) ans += i;
        if (temp2 % 4 == 0) ++ans;
    }
    printf("%lld", ans);
    return 0;
}
