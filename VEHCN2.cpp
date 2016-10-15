#include <bits/stdc++.h>

using namespace std;

int m, n;
string s1, s2;

int main(){
    scanf("%d%d", &m, &n);
    for (int i = 0; i < n; ++i){
        s1 += '*';
        s2 += '-';
    }
    s2[0] = s2[n - 1] = '*';
    cout << s1 << endl;
    for (int i = 2; i < m; ++i){
        cout << s2 << endl;
    }
    cout << s1;
    return 0;
}
