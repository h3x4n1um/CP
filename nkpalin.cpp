#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int f1[10001], f2[10001], ans;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("nkpalin.inp", "r", stdin);
        freopen("nkpalin.out", "w", stdout);
    #endif // ONLINE_JUDGE
    cin >> s1;
    for (int i = 0; i < s1.size(); ++i){
        s2 = s1[i] + s2;
    }
//    s1 = ' ' + s1;
//    s2 = ' ' + s2;
    for (int i = 0; i < s1.size(); ++i){
        for (int j = 0; j < s2.size(); ++j){
            if (s1[i] == s2[j] && f1[i] == 0 && f2[j] == 0){
                int max1 = 0, max2 = 0;
                for (int k = i; k >= 0; --k){
                    if (f1[k] != 0 && max1 < f1[k]) max1 = f1[k];
                }
                for (int k = j; k >= 0; --k){
                    if (f2[k] != 0 && max2 < f2[k]) max2 = f2[k];
                }
                f1[i] = f2[j] = min(max1, max2) + 1;
                if (ans < f1[i]) ans = f1[i];
            }
        }
    }
    printf("%d\n", ans);
    string temp;
    for (int i = s1.size() - 1; i >= 0; --i){
        if (f1[i] == ans){
            temp = s1[i] + temp;
            --ans;
        }
    }
    cout << temp;
    return 0;
}
