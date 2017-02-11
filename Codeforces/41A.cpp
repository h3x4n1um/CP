#include <bits/stdc++.h>

using namespace std;

string s1, s2;

int main(){
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    s1 == s2 ? printf("YES") : printf("NO");
    return 0;
}
