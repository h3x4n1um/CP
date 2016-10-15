#include <bits/stdc++.h>

using namespace std;

int r, c, doc[100], ngang[100], eat = 0;
char s;

int main(){
    int temp = 0;
    freopen("P142PROH.inp", "r", stdin);
    cin >> r >> c;
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){
            cin >> s;
            if (s == 'S'){
                ++ngang[j];
                ++doc[i];
            }
        }
    }
    for (int i = 0; i < r; ++i){
        if (ngang[i] == 0){
            ++temp;
            eat += c;
        }
    }
    for (int i = 0; i < c; ++i){
        if (doc[i] == 0) eat += (r - temp);
    }
    cout << eat;
    return 0;
}
