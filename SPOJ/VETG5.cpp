#include <bits/stdc++.h>

using namespace std;

int n;
string s1, s2, s3;

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        s1 += '*';
        s3 += '-';
        s2 += '-';
    }
    s3[0] = '*';
    s2[0] = s2[n - 2] = '*';
    cout << s1 << endl;
    for (int i = n - 3; i >= 0; --i){
        cout << s2 << endl;
        swap(s2[i], s2[i + 1]);
    }
    cout << s3 << endl;
    return 0;
}
