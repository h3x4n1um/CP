#include <bits/stdc++.h>

using namespace std;

string s;
int a, b, c;

int main(){
    cin >> s;
    int i = 0, temp = 0;
    while(i < s.size()){
        if (s[i] == '|') ++temp;
        else{
            if (temp == '+') a = temp;
            else b = temp;
            temp = 0;
        }
        ++i;
    }
    c = temp;
    if (abs((a + b) - c) == 2){
        if (c > a + b){
            --c;
            ++a;
        }
        else{
            if (a > 1) --a;
            else --b;
            ++c;
        }
        for (int i = 1; i <= a; ++i) printf("|");
        printf("+");
        for (int i = 1; i <= b; ++i) printf("|");
        printf("=");
        for (int i = 1; i <= c; ++i) printf("|");
    }
    else if (a + b == c) cout << s;
    else printf("Impossible");
    return 0;
}
