#include <bits/stdc++.h>

using namespace std;

int n, m;
string s1, s2, s3;

int main(){
    scanf("%d", &n);
    m = n * 2 - 1;
    for (int i = 0; i < m; ++i){
        s1 += '-';
        s3 += '*';
        s2 += '-';
    }
    s1[m / 2] = '*';
    s2[m / 2 + 1] = s2[m / 2 - 1] = '*';
    cout << s1 << endl;
    for (int i = 1; i < n - 1; ++i){
        cout << s2 << endl;
        swap(s2[m / 2 + i], s2[m / 2 + i + 1]);
        swap(s2[m / 2 - i], s2[m / 2 - (i + 1)]);
    }
    cout << s3;
    return 0;
}
