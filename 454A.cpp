#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        s += '*';
    }
    s[n / 2] = 'D';
    for (int i = 0; i < n / 2; ++i){
        cout << s << endl;
        s[n / 2 + (i + 1)] = 'D';
        s[n / 2 - (i + 1)] = 'D';
    }
    cout << s << endl;
    for (int i = 0; i < n / 2; ++i){
        s[i] = '*';
        s[n - 1 - i] = '*';
        cout << s << endl;
    }
    return 0;
}
