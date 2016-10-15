#include <bits/stdc++.h>

using namespace std;

string s;
vector <int> a;

int main(){
    //freopen("BCSTACK.inp", "r", stdin);
    while (1 == 1){
        cin >> s;
        if (s == "init") a.clear();
        if (s == "push"){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        if (s == "pop"){
            if (!a.empty()) a.pop_back();
        }
        if (s == "top"){
            if (!a.empty()){
                cout << a[a.size() - 1] << endl;
            }
            else cout << -1 << endl;
        }
        if (s == "size"){
            cout << a.size() << endl;
        }
        if (s == "empty") cout << a.empty() << endl;
        if (s == "end") break;
    }
    return 0;
}
