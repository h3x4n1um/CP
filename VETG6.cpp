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
    s3[n - 1] = '*';
    s2[n - 1] = s2[1] = '*';
    cout << s1 << endl;
    for (int i = 2; i < n; ++i){
        cout << s2 << endl;
        swap(s2[i], s2[i - 1]);
    }
    cout << s3 << endl;
    return 0;
}
