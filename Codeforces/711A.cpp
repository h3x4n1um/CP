#include <bits/stdc++.h>

using namespace std;

int n;
vector <string> a;
bool found = false;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        string s;
        cin >> s;
        for (int j = 1; j < s.size(); ++j){
            if (!found && s[j] == 'O' && s[j - 1] == 'O'){
                found = true;
                s[j - 1] = s[j] = '+';
                break;
            }
        }
        a.push_back(s);
    }
    if (found){
        puts("YES");
        for (int i = 0; i < a.size(); ++i) cout << a[i] << endl;
    }
    else puts("NO");
    return 0;
}
