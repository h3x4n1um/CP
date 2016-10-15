#include <bits/stdc++.h>

using namespace std;

int n, m;
string s;

int main(){
    scanf("%d", &n);
    m = n * 2 - 1;
    for (int i = 0; i < m; ++i){
        s += '-';
    }
    s[m / 2] = '*';
    for (int i = 0; i < n; ++i){
        cout << s << endl;
        s[m / 2 + (i + 1)] = '*';
        s[m / 2 - (i + 1)] = '*';
    }
    return 0;
}
