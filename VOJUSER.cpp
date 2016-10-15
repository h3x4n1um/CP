#include <bits/stdc++.h>

using namespace std;

string temp;
vector <string> used;
int ans;

bool check(vector <string> a, string b){
    if (b.find("{#") == string::npos || b.find("}") == string::npos) return false;
    for (int i = 0; i < a.size(); ++i){
        if (a[i].find(b) != string::npos) return false;
    }
    return true;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("VOJUSER.inp", "r", stdin);
    #endif // ONLINE_JUDGE
    while (!EOF, cin >> temp){
        if (check(used, temp)){
            used.push_back(temp);
            ++ans;
        }
    }
    printf("%d", ans);
    return 0;
}
