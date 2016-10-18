#include <bits/stdc++.h>

using namespace std;

long long int h, m, add;

int main(){
    string s;
    cin >> h >> s >> add;
    while (s.size() > 0){
        if (s[0] != ':') m = m * 10 + (s[0] - '0');
        s.erase(0, 1);
    }
    h = (h + ((m + add) / 60)) % 24;
    m = (m + add) % 60;
    printf("%02lld:%02lld", h, m);
    return 0;
}
