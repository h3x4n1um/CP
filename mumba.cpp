#include <bits/stdc++.h>

using namespace std;

int n, ans;
string d;

bool check(){
    for (int i = 1; i < d.size(); ++i){
        if (d[i] == 'b' && d[i - 1] == 'b') return false;
    }
    for (int k = 1; k <= floor((float)d.size() / 3); ++k){
        for (int i = k * 3 - 1; i < d.size(); ++i){
            string temp_1 = d.substr(i - k + 1, k);
            string temp_2 = d.substr(i - 2 * k + 1, k);
            string temp_3 = d.substr(i - 3 * k + 1, k);
            if (temp_1 == temp_2 &&
                temp_2 == temp_3 &&
                temp_3 == temp_1) return false;
        }
    }
    return true;
}

void binary(int k){
    if (k == n){
        debug << d << endl;
        bool temp = check();
        debug << temp << endl;
        debug << endl;
        if (temp) ++ans;
        return;
    }
    d[k] = 'a';
    binary(k + 1);
    d[k] = 'b';
    binary(k + 1);
}

int main(){
    freopen("mumba.inp", "r", stdin);
    freopen("mumba.out", "w", stdout);
    scanf("%d", &n);
    if (n > 16) printf("%d", 0);
    else{
        d = string(n, 0x20);
        binary(0);
        printf("%d", ans);
    }
    return 0;
}
