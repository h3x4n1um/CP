#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    string s;
    cin>>n;
    for (int i = 0; i < n; ++i){
        cin>>a>>b>>s;
        cout<<a<<" ";
        for (int j = 0; j < s.length(); ++j){
            for (int k = 1; k <= b; ++k){
                cout<<s[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
