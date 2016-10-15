#include <bits/stdc++.h>

using namespace std;

int n, ans;
char s[201];

int main(){
    #ifndef ONLINE_JUDGE
        freopen("626A.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    string temp;
    scanf("%d%s", &n, &s);
    for (int i = 0; i < n; ++i){
        int dem = i + 2;
        while (dem <= n){
            ostringstream output;
            int du = 0, dl = 0;
            for (int j = i; j < dem; ++j) output << s[j];
            temp = output.str();
            for (int j = 0; j < temp.size(); ++j){
                if (temp[j] == 'U') ++du;
                if (temp[j] == 'D') --du;
                if (temp[j] == 'L') ++dl;
                if (temp[j] == 'R') --dl;
            }
            if (du == 0, dl == 0) ++ans;
            dem += 2;
        }
    }
    printf("%d", ans);
    return 0;
}
